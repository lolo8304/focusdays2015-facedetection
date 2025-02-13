//
//  ViewController.h
//  eyes2drive
//
//  Created by Lorenz Hänggi on 07/07/15.
//  Copyright (c) 2015 Focusdays2015. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <MapKit/MapKit.h>
#import <MapKit/MKAnnotation.h>

#import <opencv2/videoio/cap_ios.h>
#include <opencv2/objdetect/objdetect.hpp>
#import <DropboxSDK/DropboxSDK.h>

@interface ViewController : UIViewController<MKMapViewDelegate,  CLLocationManagerDelegate, DBRestClientDelegate>

@property (weak, nonatomic) IBOutlet UISlider *minSizeSlider;
@property (weak, nonatomic) IBOutlet UILabel *minSizeLabel;

@property (weak, nonatomic) IBOutlet UISlider *maxSizeSlider;
@property (weak, nonatomic) IBOutlet UILabel *maxSizeLabel;

@property (weak, nonatomic) IBOutlet UIStepper *minNeighboursStepper;
@property (weak, nonatomic) IBOutlet UILabel *neighboursLabel;

@property (weak, nonatomic) IBOutlet UISegmentedControl *optionsSegment;
@property (weak, nonatomic) IBOutlet UILabel *optionsLabel;

@property (weak, nonatomic) IBOutlet UISwitch *eyesSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *noseSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *debugSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *notificationSwitch;

@property (weak, nonatomic) IBOutlet UIImageView *leftEyeImageView;
@property (weak, nonatomic) IBOutlet UIImageView *rightEyeImageView;
@property (weak, nonatomic) IBOutlet UIImageView *leftEyeClosedImageView;
@property (weak, nonatomic) IBOutlet UIImageView *rightEyeClosedImageView;

@property (weak, nonatomic) IBOutlet UIImageView *faceImageView;
@property (weak, nonatomic) IBOutlet UIImageView *crossImageLeft;
@property (weak, nonatomic) IBOutlet UIImageView *crossImageRight;
@property (weak, nonatomic) IBOutlet UIImageView *greenImage;
@property (weak, nonatomic) IBOutlet UIImageView *orangeImage;
@property (weak, nonatomic) IBOutlet UIImageView *redImage;
@property (weak, nonatomic) IBOutlet UIImageView *darkRedImage;
@property (weak, nonatomic) IBOutlet UILabel *tripLabel;

@property (weak, nonatomic) IBOutlet UIButton *toggleTripButton;


@property (nonatomic, strong) CvVideoCamera* videoCamera;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property(nonatomic, strong) CLLocationManager *locationManager;

- (void) zoomVideoCamera: (float) zoomLevel;
- (void)uploadLeftEyeImage: (UIImage*) image;
- (void)uploadRightEyeImage: (UIImage*) image;
- (void)setEyesClosedImage: (bool) isLeft closed: (bool) isClosed;

@end

