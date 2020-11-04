<!DOCTYPE html>
<html lang="ja">
    <head>
        <meta charset="UTF-8">
        <title>mission5-1</title>
    </head>
    <body>
        <hr>
      <?php
      //データベース接続
      $dsn = '';
	  $user = '';
	  $password = '';
	  $pdo = new PDO($dsn, $user, $password, 
	  array(PDO::ATTR_ERRMODE => PDO::ERRMODE_WARNING));
	  
	  //テーブル設定
	  $sql = "CREATE TABLE IF NOT EXISTS mission5"
	." ("
	. "id INT AUTO_INCREMENT PRIMARY KEY,"
	. "name char(32),"
	. "comment TEXT,"
	. "path TEXT,"
	. "date DATETIME"
	.");";
	$stmt = $pdo->query($sql);
	
	//関数定義
	$comment=$_POST["text"];
    $name=$_POST["name"];
	$date= new DateTime('now');
	$date= $date->format('Y-m-d H:i:s');
	$delete=$_POST["delete"];
    $Edit=$_POST["Edit"];
    $EditNo=$_POST["EditNo"];
    $path=$_POST["path"];
    $path1=$_POST["path1"];
    $path2=$_POST["path2"];
    
    //条件分岐 
    if(!empty($name)&&!empty($comment)&&!empty($path)&&empty($delete)
          &&empty($Edit)){
              //新規書き込み
              if(empty($EditNo)){
                  
                  $sql = $pdo -> prepare("INSERT INTO mission5
                  (name, comment, path, date) 
                  VALUES(:name, :comment, :path, :date)");
                  $sql -> bindParam(':name', $_POST["name"], PDO::PARAM_STR);
                  $sql -> bindParam(':comment', $_POST["text"], PDO::PARAM_STR); 
                  $sql -> bindParam(':path', $_POST["path"], PDO::PARAM_STR);
                  $sql -> bindValue(':date', $date, PDO::PARAM_STR);
                  $sql -> execute();
                 
                  
              }
              else{
                      //編集作業
                      $id = $EditNo;
                      $name = $_POST["name"];
                      $comment = $_POST["text"]; 
                      $sql = 'UPDATE mission5 SET 
                      name=:name,comment=:comment, path=:path,date=:date
                      WHERE id=:id';
                      $stmt = $pdo->prepare($sql);
                      $stmt->bindParam(':name', $name, PDO::PARAM_STR);
                      $stmt->bindParam(':comment', $comment, PDO::PARAM_STR);
                      $stmt->bindParam(':id', $id, PDO::PARAM_INT);
                      $stmt->bindParam(':path', $_POST["path"], PDO::PARAM_STR);
                      $stmt->bindValue(':date', $date, PDO::PARAM_STR);
                      $stmt->execute();
                      
              }
              
          }
          
    if(!empty($Edit)){
        //パスワードの抽出
        $sql = 'SELECT * FROM mission5 WHERE id=:id';
        $stmt = $pdo->prepare($sql);
        $stmt->bindParam(":id", $_POST["Edit"], PDO::PARAM_STR);
        $stmt->execute();
        $result = $stmt->fetchAll();
        foreach ($result as $line){
            $Editpat=$line["path"];
        }
        //パスワードの照合
        if($Editpat==$_POST["path2"]){
            $sql = 'SELECT * FROM mission5 WHERE id=:id';
            $stmt = $pdo->prepare($sql);
            $stmt->bindParam(':id', $_POST["Edit"], PDO::PARAM_STR);
            $stmt->execute();
            $results = $stmt->fetchAll();
            foreach ($results as $row){
                $Editnum=$row['id'];
                $Editname=$row['name'];
                $Editcom=$row['comment'];
                
            }
        }
        
        
    }
    
    if(!empty($delete)){
        
        //パスワードの抽出
        $sql = 'SELECT * FROM mission5 WHERE id=:id';
        $stmt = $pdo->prepare($sql);
        $stmt->bindParam(":id", $_POST["delete"], PDO::PARAM_STR);
        $stmt->execute();
        $result = $stmt->fetchAll();
        foreach ($result as $lines){
            $deletepath=$lines["path"];
        }
        //削除機能
        if($deletepath==$_POST["path1"]){
            $id = $delete;
            $sql = 'delete from mission5 where id=:id';
            $stmt = $pdo->prepare($sql);
            $stmt->bindParam(':id', $id, PDO::PARAM_INT);
            $stmt->execute();
        
        }
              
    }
        
    

?>
        
        
        
        
        
        
        <form action="" method="post" style="margin:15px;">
            <input type="text" name="name" placeholder="名前" 
            value="<?php if(!empty($Editname)){
            echo $Editname;}?>"><br>
            <input type="text" name="text" rows="4" cols="40" placeholder="コメント" 
            value="<?php if(!empty($Editcom)){
            echo $Editcom;}?>"><br>
            <input type="text" name="path" placeholder="パスワード" 
            value="<?php if(!empty($Editpath)){
            echo $Editpath;}?>">
            <input type="submit" name="submit"><br>
            <input type="text" name="EditNo" placeholder="編集対象番号" 
            value="<?php if(!empty($Editnum)){
            echo $Editnum;}?>"><br>
            <input type="text" name="delete" placeholder="削除番号">
            <input type="submit" name="submit" value="削除"><br>
            <input type="text" size="25" name="path1" placeholder="パスワードを入力してください">
            <br>
            <input type="text" name="Edit" placeholder="編集番号">
            <input type="submit" name="submit" value="編集"><br>
            <input type="text" size="25" name="path2" placeholder="パスワードを入力してください">
            
        </form>
        
        <?php
        
        //表示
        
         $sql = 'SELECT * FROM mission5';
         $stmt = $pdo->query($sql);
         $results = $stmt->fetchAll();
         foreach ($results as $row){
             echo $row['id'].',';
             echo $row['name'].',';
             echo $row['comment'].',';
             echo $row['date'].'<br>';
         echo "<hr>";
	}
        
    ?>
    </body>
</html>