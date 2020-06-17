// Copyright 2016-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <ZXingObjC/ZXingObjCCore.h>

@interface EXBarCodeScannerUtils : NSObject

+ (NSDictionary *)validBarCodeTypes;
+ (AVCaptureVideoOrientation)videoOrientationForInterfaceOrientation:(UIInterfaceOrientation)orientation;
+ (AVCaptureDevice *)deviceWithMediaType:(AVMediaType)mediaType
                      preferringPosition:(AVCaptureDevicePosition)position;

+ (NSDictionary *)avMetadataCodeObjectToDicitionary:(AVMetadataMachineReadableCodeObject *)result;
+ (NSDictionary *)zxResultToDicitionary:(ZXResult *)result;

@end
