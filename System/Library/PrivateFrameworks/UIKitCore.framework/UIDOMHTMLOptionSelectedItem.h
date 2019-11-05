/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	BOOL _selected;
	DOMHTMLOptionElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptionElement * _node;              //@synthesize node=_node - In the implementation block
-(void)dealloc;
-(id)node;
-(DOMHTMLOptionElement *)_node;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(BOOL)isGroup;
-(void)unselect;
-(void)set_node:(DOMHTMLOptionElement *)arg1 ;
-(id)initWithHTMLOptionNode:(id)arg1 ;
@end
