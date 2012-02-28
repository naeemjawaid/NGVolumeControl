//
//  NGVolumeControl.h
//  NGVolumeControl
//
//  Created by Tretter Matthias on 28.02.12.
//  Copyright (c) 2012 NOUS Wissensmanagement GmbH. All rights reserved.
//

#import "NGVolumeControlExpandDirection.h"

@interface NGVolumeControl : UIControl

/** The system volume, between 0.0f and 1.0f */
@property (nonatomic, assign) float volume;

/** The expand direction of the volume slider, either up or down */
@property (nonatomic, assign) NGVolumeControlExpandDirection expandDirection;
/** Flag whether the volume control is currently expanded */
@property (nonatomic, assign) BOOL expanded;

/** The color of the slider when filled */
@property (nonatomic, strong) UIColor *fillColor;

@end
