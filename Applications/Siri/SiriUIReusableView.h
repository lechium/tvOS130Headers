/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SiriUISnippetViewController;


@protocol SiriUIReusableView <NSObject>
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
@optional
-(UIEdgeInsets*)edgeInsets;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(id)arg1;

@required
+(id)reuseIdentifier;
+(double)defaultHeight;
+(id)elementKind;

@end

