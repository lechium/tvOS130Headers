/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarAppearance.h>
#import <UIKitCore/_UIBarButtonItemAppearanceChangeObserver.h>

@class UIBarButtonItemAppearance, NSString;

@interface UIToolbarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver> {

	UIBarButtonItemAppearance* _buttonAppearance;
	UIBarButtonItemAppearance* _doneButtonAppearance;

}

@property (nonatomic,copy) UIBarButtonItemAppearance * buttonAppearance;                  //@synthesize buttonAppearance=_buttonAppearance - In the implementation block
@property (nonatomic,copy) UIBarButtonItemAppearance * doneButtonAppearance;              //@synthesize doneButtonAppearance=_doneButtonAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setupDefaults;
-(void)_completeInit;
-(void)_copyFromAppearance:(id)arg1 ;
-(unsigned long long)_hashInto:(unsigned long long)arg1 ;
-(BOOL)_checkEqualTo:(id)arg1 ;
-(void)_describeInto:(id)arg1 ;
-(void)_decodeFromCoder:(id)arg1 ;
-(id)_plainButtonAppearanceData;
-(id)_doneButtonAppearanceData;
-(id)_plainButtonAppearance;
-(id)_doneButtonAppearance;
-(void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3 ;
-(void)_barButtonItemDataChanged:(id)arg1 ;
-(void)setButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(void)setDoneButtonAppearance:(UIBarButtonItemAppearance *)arg1 ;
-(UIBarButtonItemAppearance *)buttonAppearance;
-(UIBarButtonItemAppearance *)doneButtonAppearance;
@end
