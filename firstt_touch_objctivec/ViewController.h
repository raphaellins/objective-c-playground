//
//  ViewController.h
//  firstt_touch_objctivec
//
//  Created by Raphael Lins on 08/04/20.
//  Copyright © 2020 Raphael Lins. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *waterTextField;
@property (weak, nonatomic) IBOutlet UITextField *ratioTextField;
@property (weak, nonatomic) IBOutlet UITextField *coffeeTextField;

- (IBAction)calculateButtonPressed:(id)sender;

@end

