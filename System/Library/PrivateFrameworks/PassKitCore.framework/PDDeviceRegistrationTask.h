/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject {

	BOOL _shouldForce;
	NSMutableArray* _completionHandlers;
	NSString* _reason;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL shouldForce;                                 //@synthesize shouldForce=_shouldForce - In the implementation block
-(id)init;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)setShouldForce:(BOOL)arg1 ;
-(BOOL)shouldForce;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
@end

