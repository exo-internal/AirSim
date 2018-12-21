## Setup

#### Get an environment
Download an AirSim environment from [the AirSim releases page](https://github.com/Microsoft/AirSim/releases). I like `AirSimNH`, `CityEnviron`, and `Warehouse`. Extract it to:

`C:\dev\Airsim Environments\`

#### Install Visual Studio 

Download [Visual Studio 2017 Community](https://visualstudio.microsoft.com/vs/) from the Microsoft website and install it with c++ tooling.

#### Install Unreal Engine 4.18

Download the [Epic Games Installer](https://www.unrealengine.com/en-US/what-is-unreal-engine-4) and install Unreal Engine 4.18.

#### Install ROS2
Install ROS2 Crystal Clemmys by using the Windows binary installation instructions found [here](https://index.ros.org/doc/ros2/Windows-Install-Binary/). Extract it to:

`C:\dev\ros2-crystal\`

#### Install OpenCV
If you didn't do it while installing ROS2, install OpenCV 3.4.1 using [this link](https://github.com/ros2/ros2/releases/download/opencv-archives/opencv-3.4.1-vc15.VS2017.zip). Extract it to:

`C:\dev\opencv\` 

#### Set up the Windows Path variable
Add the ROS2 and OpenCV binaries to your path by opening the start menu and typing `environment variables` and then clicking on `Edit the system environment variables`. Then click the `Environment Variables...` button, double click `Path` in the `User variables for ___` menu, and then adding the following two entries to the list:

```
C:\dev\opencv\build\x64\vc15\bin
C:\dev\ros2-crystal\bin
C:\dev\ros2-crystal\Lib
```
...and clicking `OK` on the three open windows.

#### Get this repo
Clone this repository to your `C:\dev\` folder.

Copy the `settings.json` file to your `~\Documents\AirSim\` folder. If it doesn't exist, run AirSim once to create it.


#### Build AirSim

Run a new `x64 Native Tools Command Prompt for VS 2017` window in administrative mode and navigate to the `C:\dev\AirSim\` directory, then run `build.cmd`. 

#### Build the bridges
Open the `AirSim.sln` solution file in Visual Studio 2017. Select the `Build -> Rebuild Soultion` item from the menu bar.

If it works, you're ready!

## Running

#### Run AirSim
To open AirSim, open one of the environment directories and double click the `run.bat` file. If desired, modify this file to include the flags: `-ResX=640` and `-ResY=480` in order to not have to resize it every time.

#### Running the bridge
Double click the `start-airsim.bat` script located in this repository's root directory.

To stop, use `ctrl-c` on the running process.
