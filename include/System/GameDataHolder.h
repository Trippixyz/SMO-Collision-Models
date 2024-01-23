#pragma once

#include <sead/basis/seadTypes.h>

class GameDataFile;

class GameDataHolder /*: public al::GameDataHolderBase*/
{
public:
    // GameDataHolder(al::MessageSystem const *);
    GameDataHolder();

    virtual ~GameDataHolder();

    virtual char* getSceneObjName() const;
    // virtual al::MessageSystem* getMessageSystem() const;

    void setPlayingFileId(s32 file);
    void requestSetPlayingFileId(int file);
    void intitalizeData();
    void initialzeDataCommon();
    void resetTempSaveData(bool);
    void initializeDataId(s32);
    void readByamlData(s32, char const*);
    s32 tryFindEmptyFileId() const;

    bool isRequireSave() const;
    void setRequireSave();
    void setRequireSaveFalse();
    void setRequireSaveFrame();
    void updateRequireSaveFrame();
    bool isInvalidSaveForMoonGet() const;
    void invalidateSaveForMoonGet();
    void validateSaveForMoonGet();
    void setLanguage(char const*);
    char* getLanguage() const;

    void resetLocationName();
    void changeNextStageWithDemoWorldWarp(char const*);
    bool tryChangeNextStageWithWorldWarpHole(char const*);
    void returnPrevStage();
    char* getNextStageName() const;
    char* getNextStageName(s32 idx) const;
    GameDataFile* getGameDataFile(s32 idx) const;
    // u64 getNextPlayerStartId() const;
    char* getCurrentStageName() const;
    char* tryGetCurrentStageName() const;
    char* getCurrentStageName(s32 idx) const;
    // void setCheckpointId(al::PlacementId const *);
    char* tryGetRestartPointIdString() const;
    void endStage();
    void startStage(char const*, s32);
    // void onObjNoWriteSaveData(al::PlacementId const *);
    // void offObjNoWriteSaveData(al::PlacementId const *);
    // bool isOnObjNoWriteSaveData(al::PlacementId const *) const;
    // void onObjNoWriteSaveDataResetMiniGame(al::PlacementId const*);
    // void offObjNoWriteSaveDataResetMiniGame(al::PlacementId const *);
    // bool isOnObjNoWriteSaveDataResetMiniGame(al::PlacementId const *) const;
    // void onObjNoWriteSaveDataInSameScenario(al::PlacementId const *);
    // bool isOnObjNoWriteSaveDataInSameScenario(al::PlacementId const *) const;
    void writeTempSaveDataToHash(char const*, bool);

    void resetMiniGameData();
    s32 getPlayingFileId() const;

    s32 findUnlockShineNum(bool*, s32) const;
    s32 calcBeforePhaseWorldNumMax(s32) const;
    bool isFindKoopaNext(s32) const;
    bool isBossAttackedHomeNext(s32) const;
    void playScenarioStartCamera(s32);
    bool isPlayAlreadyScenarioStartCamera() const;

    s32 getShineAnimFrame(s32) const;
    s32 getCoinCollectNumMax(s32) const;

    void readFromSaveDataBufferCommonFileOnlyLanguage();
    void readFromSaveDataBuffer(const char* bufferName);

    void changeNextStage(struct ChangeStageInfo const*, int);

    int findUseScenarioNo(char const*);
};