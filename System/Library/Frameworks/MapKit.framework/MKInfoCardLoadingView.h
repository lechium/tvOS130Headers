/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView;

@interface MKInfoCardLoadingView : UIView {

	UIActivityIndicatorView* _loadingIndicator;

}
-(void)dealloc;
-(void)_layout;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)startAnimating;
-(void)layoutSubviews;
-(void)stopAnimating;
@end

