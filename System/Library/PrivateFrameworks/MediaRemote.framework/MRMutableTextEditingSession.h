/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRTextEditingSession.h>

@class NSString, MRTextEditingAttributes;

@interface MRMutableTextEditingSession : MRTextEditingSession

@property (nonatomic,copy) NSString * text; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,retain) MRTextEditingAttributes * attributes; 
-(void)setAttributes:(MRTextEditingAttributes *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
@end

