/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CHSearchQueryItem : NSObject {

	NSSet* _strokeIdentifiers;

}

@property (nonatomic,copy,readonly) NSSet * strokeIdentifiers;              //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSSet *)strokeIdentifiers;
-(id)initWithStrokeIdentifiers:(id)arg1 ;
-(BOOL)isEqualToSearchQueryItem:(id)arg1 ;
@end

