//
//  FirstViewController.h
//  Pic-Up
//
//  Created by Владимир on 02.01.16.
//  Copyright © 2016 Владимир. All rights reserved.
//

#import <UIKit/UIKit.h>

int fRandomValue;

@interface FirstViewController : UIViewController


{
    
    IBOutlet UIButton *Neck;
    IBOutlet UIButton *Face;
    IBOutlet UIButton *Hair;
    IBOutlet UILabel *DisplayRandomValue;
    
    UIPasteboard *pasterboard;
}
@property (weak, nonatomic) IBOutlet UILabel *Label;//присвоил действие по копированию лабельке

@property (nonatomic, retain) IBOutlet UIView *portraitView;
//@property (nonatomic, retain) IBOutlet UIView *landscapeView;

-(IBAction)Hair:(id)sender;
-(IBAction)Face:(id)sender;
-(IBAction)Neck:(id)sender;
-(IBAction) information;
//-(IBAction)Copy:(id)sender;

@end

