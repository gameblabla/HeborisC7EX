#ifndef MISSION_H
#define MISSION_H

extern void getMissionName(int mtype,int number);
extern void getRoadName(int no);
extern void loadMissionData(int number);
extern void loadTargetStage();
extern void missionNormUp(int lines);
extern void missionSetStatus();
extern void saveMissionData(int number);
extern void setEraserLines();
extern void statMissionEditor(int player);
extern void statMissionSelect(int player);
extern void viewEraserLines();
extern void viewMission();

#endif
