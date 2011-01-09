/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInternal;



@interface AVAssetWriter : NSObject 
{
    AVAssetWriterInternal *_priv;
}

@property(copy,readonly) NSURL *outputURL;
@property(copy,readonly) NSString *outputFileType;
@property(readonly) NSArray *availableMediaTypes;
@property(readonly) NSInteger status;
@property(readonly) NSError *error;
@property ? movieFragmentInterval;
@property BOOL shouldOptimizeForNetworkUse;
@property(readonly) NSArray *inputs;
@property(copy) NSArray *metadata;

+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;

- (NSInteger)status;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (BOOL)startWriting;
- (id)inputs;
- (void)setMovieFragmentInterval:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })movieFragmentInterval;
- (id)availableMediaTypes;
- (id)outputFileType;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;
- (id)outputURL;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (id)addSampleBufferInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (id)addPixelBufferInputWithMediaType:(id)arg1 sourcePixelBufferAttributes:(id)arg2 outputSettings:(id)arg3;
- (void)startSessionAtSourceTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (void)endSessionAtSourceTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (void)cancelWriting;
- (BOOL)finishWriting;
- (id)error;

@end