//
//  UIViewController+Four.m
//  PickupMaster
//
//  Created by Владимир on 08.09.16.
//  Copyright © 2016 Владимир. All rights reserved.
//

#import "FourViewController.h"

@interface FourViewController ()

@end

@implementation FourViewController

-(IBAction) information
{
    UIAlertController* alert = [UIAlertController alertControllerWithTitle:@"My Alert" message:@"This is an alert."
                                                            preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                          handler:^(UIAlertAction * action) {}];
    
    [alert addAction:defaultAction];
    [self presentViewController:alert animated:YES completion:nil];
}


- (void)viewDidLoad {
    [super viewDidLoad];
    pasterboard = [UIPasteboard generalPasteboard];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)copy:(id)sender {
    pasterboard.string = _Label.text;
}


@end
