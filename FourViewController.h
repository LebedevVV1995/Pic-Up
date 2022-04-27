 //
//  UIViewController+Four.h
//  PickupMaster
//
//  Created by Владимир on 08.09.16.
//  Copyright © 2016 Владимир. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FourViewController : UIViewController {

    UIPasteboard *pasterboard;
}
@property (weak, nonatomic) IBOutlet UILabel *Label;


-(IBAction) information;


@end
