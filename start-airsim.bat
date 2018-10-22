cd "C:\dev\AirSim\AirSimNH"
start AirSimNH -ResX=640 -ResY=480 -windowed

timeout /t 7

cd "C:\src\AirSim\ROS2Bridge\build\x64\Release\"
start AirSimROS2Publishers.exe

cd "C:\src\AirSim\ROS2Subscriptions\build\x64\Release\"
start AirSimROS2Subscriptions.exe

cd "C:\src\AirSim\ROS2FrontCamera\build\x64\Release\"
start AirSimROS2FrontCamera.exe

cd "C:\src\AirSim\ROS2DownCamera\build\x64\Release\"
start AirSimROS2DownCamera.exe

cd "C:\src\AirSim\ROS2RearCamera\build\x64\Release\"
start AirSimROS2RearCamera.exe

exit
