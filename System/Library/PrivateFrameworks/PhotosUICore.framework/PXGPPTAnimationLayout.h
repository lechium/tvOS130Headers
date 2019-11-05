/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <PhotosUICore/PXGSolidColorSource.h>

@class NSArray, NSString;

@interface PXGPPTAnimationLayout : PXGLayout <PXGSolidColorSource> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	NSArray* _colors;
	unsigned _numberOfRows;
	unsigned _numberOfColumns;
	long long _style;

}

@property (assign,nonatomic) unsigned numberOfRows;                              //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) unsigned numberOfColumns;                           //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSString * configurationDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)update;
-(void)setNumberOfColumns:(unsigned)arg1 ;
-(unsigned)numberOfColumns;
-(unsigned)numberOfRows;
-(void)setNumberOfRows:(unsigned)arg1 ;
-(void)_updateContent;
-(void)referenceSizeDidChange;
-(UIColor*)colorAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(NSString *)configurationDescription;
@end
