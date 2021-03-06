/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCMMActionPerformer.h>

@class PXCMMContext;

@interface PXCMMSendBackActionPerformer : PXCMMActionPerformer {

	PXCMMContext* _sendBackContext;

}

@property (nonatomic,retain) PXCMMContext * sendBackContext;              //@synthesize sendBackContext=_sendBackContext - In the implementation block
-(void)setSendBackContext:(PXCMMContext *)arg1 ;
-(PXCMMContext *)sendBackContext;
-(id)performSendBackActionWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_completeSendBackActionWithSuccess:(BOOL)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

