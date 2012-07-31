//
//  ViewController.h
//  HelloApp
//
//  Created by Phillip Reed on 7/31/12.
//  Copyright (c) 2012 Phillip Reed. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *helloLabel;
@property (weak, nonatomic) IBOutlet UITextField *helloTextField;
- (IBAction)helloButtonPressed:(UIButton *)sender;



@end
