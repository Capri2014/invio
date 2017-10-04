/*
 * vioParams.h
 *
 *  Created on: Jul 31, 2017
 *      Author: kevin
 */

#ifndef PAUVSI_VIO_INCLUDE_PAUVSI_VIO_VIOPARAMS_H_
#define PAUVSI_VIO_INCLUDE_PAUVSI_VIO_VIOPARAMS_H_

//#define ROSCONSOLE_MIN_SEVERITY ROSCONSOLE_SEVERITY_DEBUG

#define SUPER_DEBUG false

#define D_PUBLISH_INSIGHT true
#define D_INSIGHT_TOPIC "invio/insight"

//VISUAL ODOM
//fast corner detector for planar odometry
#define D_FAST_THRESHOLD 50
// the amount to blur the image before feature extraction
#define D_FAST_BLUR_SIGMA 0.0

#define D_INVERSE_IMAGE_SCALE 4

// use previous odometry for prior
#define D_USE_PREDICTED_PRIOR false

//analyze the function times
#define D_ANALYZE_RUNTIME true

// the radius to remove features at in pixels
#define D_KILL_BOX_WIDTH 110
#define D_KILL_BOX_HEIGHT 110

// the minimum feature eigen val where it is determined as lost
#define D_KLT_MIN_EIGEN 1e-4

// the minimum pixel distance a feature must have between a previous feature
#define D_MIN_NEW_FEATURE_DIST 30

// the desired number of features more = robust...er (and slower)
#define D_NUM_FEATURES 100

// the amount of points needed to start pauvsi vio odometry
#define D_START_FEATURE_COUNT 20

// the minimum amount of mature features which is deemed dangerous
#define D_DANGEROUS_MATURE_FEATURE_COUNT_LEVEL 10

//minimum detected features before vo has failed
#define D_MINIMUM_TRACKABLE_FEATURES 4

// the amount of frames to store for feature optimization
#define D_FRAME_BUFFER_SIZE 200

// the number of times a feature must be observed before allowed to be optimized
#define D_MINIMUM_KEYFRAME_COUNT_FOR_OPTIMIZATION 4
#define D_MAXIMUM_KEYFRAME_COUNT_FOR_OPTIMIZATION 7

// the minimum ratio of translation to avg scene depth
#define D_T2ASD 0.1

// the maximum error a feature can have after an optim
#define D_MATURE_DEPTH_VARIANCE 0.2

// continue to update point depth even when converged
#define D_CONSTANTLY_UPDATE_DEPTH true

// default point depth used for initialization in meters
#define D_DEFAULT_POINT_DEPTH 0.5
#define D_DEFAULT_POINT_STARTING_VARIANCE 1000

// epsilon for convergence in structure bundle adjustment and motion
#define D_EPS_SBA 0.0000000001
#define D_EPS_MOBA 0.000001

#define D_MINIMUM_DEPTH_DETERMINANT 0.0000001

//max iterations for gausss newton
#define D_MOBA_MAX_ITERATIONS 10
#define D_SBA_MAX_ITERATIONS 10

//min and maximum point depths in meters
#define D_MAX_POINT_Z 10
#define D_MIN_POINT_Z 0.02

//OUTLIER DETECTION
#define D_MAX_RANGE_PER_DEPTH 0.1


//if the ppe of our planar odometry exceeds this value we have lost odometry
#define D_MAXIMUM_VO_PPE 7.0

//END VISUAL ODOM

#define D_MAX_VARIANCE_SIZE 15
#define D_MIN_VARIANCE_SIZE 5

#define D_ODOM_TOPIC "invio/odom"
#define D_POINTS_TOPIC "invio/points"
#define D_ODOM_FRAME "invio_odom"

// this topic will serve as a last resort for realignment
#define D_POINTCLOUD_TOPIC "guidance/points2"
#define D_POINTCLOUD_FRAME "guidance"

//#define CAMERA_TOPIC "/guidance/left/image_rect"
//#define CAMERA_FRAME "guidance"
#define D_CAMERA_TOPIC "/camera/image_rect"
#define D_CAMERA_FRAME "camera"

#define D_BASE_FRAME "base_link"

#define D_WORLD_FRAME "world"

#define D_USE_IMU true
#define D_IMU_TOPIC "imu/measurement"
#define D_IMU_FRAME "imu"

//ROS PARAMS
bool PUBLISH_INSIGHT;
std::string INSIGHT_TOPIC;

int MAX_VARIANCE_SIZE, MIN_VARIANCE_SIZE;

//VISUAL ODOM
//fast corner detector for planar odometry
int FAST_THRESHOLD;
// the amount to blur the image before feature extraction
double FAST_BLUR_SIGMA;

double INVERSE_IMAGE_SCALE;

// use previous odometry for prior
bool USE_PREDICTED_PRIOR;

//analyze the function times
bool ANALYZE_RUNTIME;

// the radius to remove features at in pixels
int KILL_BOX_WIDTH;
int KILL_BOX_HEIGHT;

// the minimum feature eigen val where it is determined as lost
double KLT_MIN_EIGEN;

// the minimum pixel distance a feature must have between a previous feature
double MIN_NEW_FEATURE_DIST;

// the desired number of features more = robust...er (and slower)
int NUM_FEATURES;

// the amount of points needed to start pauvsi vio odometry
int START_FEATURE_COUNT;

// the minimum amount of mature features which is deemed dangerous
int DANGEROUS_MATURE_FEATURE_COUNT_LEVEL;

//minimum detected features before vo has failed
int MINIMUM_TRACKABLE_FEATURES;

// the amount of frames to store for feature optimization
int FRAME_BUFFER_SIZE;

// the number of times a feature must be observed before allowed to be optimized
int MINIMUM_KEYFRAME_COUNT_FOR_OPTIMIZATION;
int MAXIMUM_KEYFRAME_COUNT_FOR_OPTIMIZATION;

// the minimum ratio of translation to avg scene depth
double T2ASD;

// the variance when a point is factored into the motion estimation problem
double MATURE_DEPTH_VARIANCE;

// should we continue to update the depth of a feature if it is already in the motion estimation problem
bool CONSTANTLY_UPDATE_DEPTH;

// default point depth used for initialization in meters
double DEFAULT_POINT_DEPTH;
double DEFAULT_POINT_STARTING_VARIANCE;

// epsilon for convergence in structure bundle adjustment and motion
double EPS_SBA;
double EPS_MOBA;

// the minimum determinant of the linear systems used to determine the depth of the first observation
double MINIMUM_DEPTH_DETERMINANT;

//max iterations for gausss newton
int MOBA_MAX_ITERATIONS;
int SBA_MAX_ITERATIONS;

//min and maximum point depths in meters
double MAX_POINT_Z;
double MIN_POINT_Z;

double MAX_RANGE_PER_DEPTH;

//END VISUAL ODOM

std::string ODOM_TOPIC;
std::string POINTS_TOPIC;
std::string ODOM_FRAME;

//double CAMERA_TOPIC "/guidance/left/image_rect"
std::string CAMERA_FRAME;
std::string CAMERA_TOPIC;

std::string BASE_FRAME;

std::string WORLD_FRAME;

bool USE_IMU;
std::string IMU_TOPIC;
std::string IMU_FRAME;
//END ROS PARAMS

#endif /* PAUVSI_VIO_INCLUDE_PAUVSI_VIO_VIOPARAMS_H_ */
