include_directories(${ARTEMIS_DIR}/include)
include_directories(${ARTEMIS_SHARE_DIR}/src)
include_directories(${ARTEMIS_SHARE_DIR}/src/gate)
#link_directories(${ARTEMIS_DIR}/lib)
#link_directories(${ARTEMIS_SHARE_DIR}/src)

ROOT_GENERATE_DICTIONARY(G__treeanalib
	${ARTEMIS_DIR}/include/TRawDataObject.h
	${ARTEMIS_DIR}/include/TRawDataFadc.h
	${ARTEMIS_DIR}/include/TRunInfo.h
	${ARTEMIS_DIR}/include/TArtemisObject.h
	${ARTEMIS_DIR}/include/TCatPulseShape.h
	${ARTEMIS_DIR}/include/TDataObject.h
	${ARTEMIS_DIR}/include/ICharge.h
	${ARTEMIS_DIR}/include/ITiming.h
	${ARTEMIS_DIR}/include/IPosition.h
	${ARTEMIS_DIR}/include/TEventHeader.h
	${ARTEMIS_SHARE_DIR}/src/gate/TGateObject.h
	${ARTEMIS_SHARE_DIR}/src/gate/TGateArray.h
	${ARTEMIS_SHARE_DIR}/src/gate/TGateInfo.h
	LINKDEF ../include/TreeAnaLinkDef.h
)

add_library(treeanalib SHARED
            ${ARTEMIS_SOURCE_DIR}/sources/loop/TRawDataObject.cc
            ${ARTEMIS_SOURCE_DIR}/sources/loop/decoder/TRawDataFadc.cc
            ${ARTEMIS_SOURCE_DIR}/sources/loop/TEventHeader.cc
            ${ARTEMIS_SOURCE_DIR}/sources/core/TRunInfo.cc
            ${ARTEMIS_SOURCE_DIR}/sources/core/TArtemisObject.cc
            ${ARTEMIS_SOURCE_DIR}/sources/cont/TCatPulseShape.cc
            ${ARTEMIS_SOURCE_DIR}/sources/cont/ICharge.cc
            ${ARTEMIS_SOURCE_DIR}/sources/cont/IPosition.cc
            ${ARTEMIS_SOURCE_DIR}/sources/cont/ITiming.cc
            ${ARTEMIS_SOURCE_DIR}/sources/core/TDataObject.cc
            ${ARTEMIS_SHARE_DIR}/src/gate/TGateObject.cc
            ${ARTEMIS_SHARE_DIR}/src/gate/TGateArray.cc
            ${ARTEMIS_SHARE_DIR}/src/gate/TGateInfo.cc
            G__treeanalib.cxx
            )

target_link_libraries(treeanalib ${ROOT_LIBRARIES})
add_executable(treeana main.cpp)
add_executable(treeana_cf4 main_cf4.cpp)

target_link_libraries(treeana ${ROOT_LIBRARIES} treeanalib)
target_link_libraries(treeana_cf4 ${ROOT_LIBRARIES} treeanalib)
#target_link_libraries(treeana ${ROOT_LIBRARIES} user catcore artparam artcont catloop artridf artrdf arthist artdecoder catmc catcmd)