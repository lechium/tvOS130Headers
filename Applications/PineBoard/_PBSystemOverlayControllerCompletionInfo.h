/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBSystemOverlaySession;

@interface _PBSystemOverlayControllerCompletionInfo : NSObject {

	PBSystemOverlaySession* _session;
	/*^block*/id _completion;

}

@property (nonatomic,retain) PBSystemOverlaySession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) id completion;                                   //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(PBSystemOverlaySession *)session;
-(void)setSession:(PBSystemOverlaySession *)arg1 ;
@end
