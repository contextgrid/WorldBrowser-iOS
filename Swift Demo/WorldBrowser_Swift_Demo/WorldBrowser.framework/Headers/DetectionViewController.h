//
//  DetectionViewController.h
//  WorldBCV
//
//  Created by TechnoMac-14 on 17/01/18.
//  Copyright © 2018 TechnoMac-14. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetectionViewController : UIViewController
{
    UIView *HeaderView,*loginBackView;
    UILabel *lblHeder,*lblCompName,*lblUNM,*lblPWD;
    UIButton *btnSubmit,*btnBack;
    UITextField *txtUserName,*txtPassword;
}
+(instancetype) sharedManager;
//-(void)openCameraWithDetection;
-(void)openMap;
-(void)setCompanyKey:(NSString*)Company_Key;
@end
