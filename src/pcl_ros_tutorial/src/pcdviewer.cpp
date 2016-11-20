#include <iostream>
#include <pcl/io/io.h>
#include <pcl/io/pcd_io.h>
#include <pcl/visualization/cloud_viewer.h>

typedef pcl::PointXYZ PointT;

void vierwerOneOff (pcl::visualization::PCLVisualizer& viewer)
{
    viewer.setBackgroundColor(0,0,0);
}

void viewerPsycho(pcl:;visualization::PCLVisualizer& viewer)
{
}

int main (int argc , char *argv[])
{
    pcl::PointCloud<PointT>::Ptr cloud (new pcl::PointCloud<PointT>);

    int ret = pcl::io::loadPCDFile(argv[1], *cloud)
    if(ret<0)
    {
        PCL_ERROR("couldn't read file %s\n", argv[1]);
        return -1;
    }

    pcl::visualization::CloudViewer viewer("Cloud Viewer");

    viewer.showCloud(cloud);
    viewer.runOnVisualizationThreadOnce(viewerOneOff);
    viewer.runOnVisualaizationThread (viewerPsycho);
    while(!viewer.wasStopped())
    {
    
    }

    return 0;


}
