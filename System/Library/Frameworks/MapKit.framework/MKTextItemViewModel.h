/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MKTextItemViewModel : NSObject {

	NSArray* _values;

}

@property (nonatomic,copy) NSArray * values;              //@synthesize values=_values - In the implementation block
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(unsigned long long)numberOfRows;
-(id)initWithTextItemContainer:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 maxWidth:(double)arg4 ;
-(id)stringsForRowAtIndex:(unsigned long long)arg1 ;
@end
