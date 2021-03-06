/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL;

@interface UIWebClipIcon : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    } _bestSize;
    BOOL _precomposed;
    BOOL _siteWide;
    NSURL *_url;
}

@property struct CGSize { float x1; float x2; } bestSize;
@property(getter=isPrecomposed) BOOL precomposed;
@property(getter=isSiteWide) BOOL siteWide;
@property(retain) NSURL * url;

- (struct CGSize { float x1; float x2; })bestSize;
- (int)compare:(id)arg1 preferringDeviceIconSizes:(BOOL)arg2;
- (void)dealloc;
- (BOOL)isPrecomposed;
- (BOOL)isSiteWide;
- (void)setBestSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPrecomposed:(BOOL)arg1;
- (void)setSiteWide:(BOOL)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
