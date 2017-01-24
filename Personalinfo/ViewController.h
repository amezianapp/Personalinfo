//
//  ViewController.h
//  Personalinfo
//
//  Created by Amezian Amarouche on 2017-01-23.
//  Copyright © 2017 I Comm Marketing. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *FirstNameTextField;
@property (weak, nonatomic) IBOutlet UITextField *LastNameTextField;
@property (weak, nonatomic) IBOutlet UITextField *PhoneTextField;
@property (weak, nonatomic) IBOutlet UITextField *NumberTextField;
@property (weak, nonatomic) IBOutlet UITextField *StreetTextField;
@property (weak, nonatomic) IBOutlet UITextField *CityTextField;
@property (weak, nonatomic) IBOutlet UITextField *CountryTextField;
@property (weak, nonatomic) IBOutlet UITextField *PostalCodeTextField;


@property (weak, nonatomic) IBOutlet UIButton *Cbutton;
@property (weak, nonatomic) IBOutlet UIButton *SButton;
@property (weak, nonatomic) IBOutlet UIButton *MButton;


@property (weak, nonatomic) IBOutlet UILabel *FirstNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *LastNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *PhoneLabel;
@property (weak, nonatomic) IBOutlet UILabel *NumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *StreetLabel;
@property (weak, nonatomic) IBOutlet UILabel *CityLabel;
@property (weak, nonatomic) IBOutlet UILabel *CountryLabel;
@property (weak, nonatomic) IBOutlet UILabel *PostalCodeLabel;

@end

