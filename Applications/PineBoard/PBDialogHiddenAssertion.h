/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/BSInvalidatable.h>

@class NSString, BSSimpleAssertion;

@interface PBDialogHiddenAssertion : NSObject <BSInvalidatable> {

	NSString* _reason;
	BSSimpleAssertion* _assertion;

}

@property (nonatomic,readonly) BSSimpleAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(NSString *)reason;
-(BSSimpleAssertion *)assertion;
-(id)initWithReason:(id)arg1 ;
@end

