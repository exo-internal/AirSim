cd "C:\dev\AirSim Environments\TrapCam"
start TrapCam -ResX=640 -ResY=480 -windowed

timeout /t 7

cd "C:\dev\AirSim\ROS2Bridge\build\x64\Release"
start AirSimROS2Publishers.exe

cd "C:\dev\AirSim\ROS2Subscriptions\build\x64\Release\"
start AirSimROS2Subscriptions.exe

cd "C:\dev\AirSim\ROS2FrontCamera\build\x64\Release\"
start AirSimROS2FrontCamera.exe

cd "C:\dev\AirSim\ROS2DownCamera\build\x64\Release\"
start AirSimROS2DownCamera.exe

cd "C:\dev\AirSim\ROS2RearCamera\build\x64\Release\"
start AirSimROS2RearCamera.exe

exit
