//
//  ELCTextfieldCell.h
//  MobileWorkforce
//
//  Created by Collin Ruffenach on 10/22/10.
//  Copyright 2010 ELC Tech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PrettyTableViewCell.h"

@interface ELCTextfieldCell : PrettyTableViewCell   <UITextFieldDelegate> {
    
	id delegate;
	UILabel *leftLabel;
	UITextField *rightTextField;
	NSIndexPath *indexPath;
}

@property (nonatomic, assign) id delegate;
@property (nonatomic, retain) UILabel *leftLabel;
@property (nonatomic, retain) UITextField *rightTextField;
@property (nonatomic, retain) NSIndexPath *indexPath;

@end

@protocol ELCTextFieldDelegate
@optional
- (void)textFieldDidReturnWithIndexPath:(NSIndexPath*)_indexPath;
- (void)updateTextLabelAtIndexPath:(NSIndexPath*)_indexPath string:(NSString*)_string;
- (void)textFieldDidBeginEditing:(UITextField *)textField indexPath:(NSIndexPath *)indexPath;
- (void)textFieldDidEndEditing:(UITextField *)textField indexPath:(NSIndexPath *)indexPath;
- (void)textFieldDidEndEditing:(UITextField *)textField indexPath:(NSIndexPath *)indexPath;
- (void)textFieldShouldClear:(UITextField *)textField indexPath:(NSIndexPath *)indexPath;

@end