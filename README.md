# Unreal Editor 5 // Collaboration Project

## Purpose

From blank ue5 c++ project.

### Image of project

![alt text](./img/UE5CollabStart.png "Image of project")

## Goal

To use UE5 tools to make a game and use Git to version control

## Notes

if the clone doesnt work, will need to add this file in the path specified below

> Intermediate/Build/Win64/UE5CollabEditor/Development/Engine/SharedPCH.Engine.ShadowErrors.h.pch

## Multiplayer Testing

### Create Server

1. open powershell
2. run the following command

```powershell
 & 'F:\UE_5.0\Engine\Binaries\Win64\UnrealEditor.exe' 'C:\Users\A-A-Ron\git\UE5Collab\UE5Collab.uproject' /Game/TestMap1?listen -game -log
```

### Join Server as Client

1. open powershell
2. run the following command

```powershell
 & 'F:\UE_5.0\Engine\Binaries\Win64\UnrealEditor.exe' 'C:\Users\A-A-Ron\git\UE5Collab\UE5Collab.uproject' 127.0.0.1 -game -log
```

