# pcl_cv_ws
pcl, opencv ROS conversion 

environment: ubuntu14.04 ROs indigo

```
sudo apt-get install ros-indigo-perception
sudo apt-get install ros-indigo-perception-pcl
```
tutorial:
https://hackmd.io/s/B1ZLigyfx

#### Usage
`git clone https://github.com/Roboluv-TW/pcl_cv_ws.git`

```
source environment.sh
cd ~/pcl_cv_ws
catkin_make
```
pcl target in 
build/pcl_ros_tutorial

`mv build/pcl_ros_tutorial devel/lib/`
`mv pcl_viewer devel/lib/pcl_ros_tutorial/`
`source environment.sh`
##### publish point cloud
`rosrun pcl_ros_tutorial pcl_publisher_node`
`rosrun rviz rviz -f point_cloud`
##### apply votex grid filter 
`rosrun pcl_ros_tutorial pcl_filter`
##### read write PCD
`rosrun pcl_ros_tutorial pcl_write`
`rosrun pcl_ros_tutorial pcl_read`

see test.pcd
the test.pcd store under pcl_cv_ws/
`cd ~/pcl_cv_ws`

`rosrun pcl_ros_tutorial pcl_viewer test.pcd`


