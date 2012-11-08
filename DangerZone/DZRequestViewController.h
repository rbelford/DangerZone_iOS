//
//  DZRequestViewController.h
//  Danger_Tab
//
//  Created by rbelford on 10/16/12.
//  Copyright (c) 2012 rbelford. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CLGeocoder.h>
#import "DTMutableObject.h"
#import <MapKit/MapKit.h>

@class DZStoredObjects;

@interface DZRequestViewController : UIViewController < UIPickerViewDelegate, UIPickerViewDataSource >


@property (nonatomic, retain) IBOutlet UITextField *localeText;
@property (strong, nonatomic) IBOutlet UIPickerView *picker;
@property (nonatomic, retain) CLGeocoder *geoCoder;
@property NSArray *categoryStrings;
@property (strong, nonatomic) NSArray *rangeStrings;
@property (strong, nonatomic) NSArray *rangeValues; // in parallel with rangeStrings
@property DZStoredObjects *dangerZones; // the model's variables, see DTMutableObject.h

@property (nonatomic, strong) MKPointAnnotation *tempAnnotation;

- (IBAction)onReturnPressed:(id)sender;

- (IBAction)onSubmitPressed:(id)sender;

- (IBAction)onGlobalPressed:(id)sender;
@end
