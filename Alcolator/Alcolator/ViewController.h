//
//  ViewController.h
//  Alcolator
//
//  Created by Daniel Rodas on 3/9/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;

- (void)buttonPressed:(UIButton *)sender;

- (float)ouncesInOneGlass;

- (float)alcoholPercentage;

- (NSString *)alcoholName;

@end

