# pcl_cv_ws
pcl, opencv ROS conversion 
environment: ubuntu14.04 ROs indigo

```
sudo apt-get install ros-indigo-perception
sudo apt-get install ros-indigo-perception-pcl
```

#### Usage
`git clone `

```
source environment.sh
cd ~/pcl_cv_ws
catkin_make
source environment.sh
```
pcl target in 

`cd pcl_cv_ws/build/pcl_ros_tutorial`

##### publish point cloud
`rosrun pcl_ros_tutorial pcl_publisher_node`
##### apply votex grid filter 
`rosrun pcl_ros_tutorial pcl_filter`
##### read write PCD
`rosrun pcl_ros_tutorial pcl_write`
`rosrun pcl_ros_tutorial pcl_read`

tutorial:
https://hackmd.io/s/B1ZLigyfx
