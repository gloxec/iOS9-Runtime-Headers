/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstActionClassifier : NSObject  {
    float testMaxInnerDistance;
    float testInOutRatio;
    float testMaxPeakRegistrationError;
    float testMeanPeakRegistrationError;
    float testMaxRegistrationErrorSkewness;
    float testMinRegionOfInterestSize;
    float testMaxRegistrationErrorIntegral;
    float testAverageCameraTravelDistance;
    float testAverageRegistrationErrorSkewness;
    float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    BOOL hasBeenScaled;
    double testVector[7];
}

@property float testMaxInnerDistance;
@property float testInOutRatio;
@property float testMaxPeakRegistrationError;
@property float testMeanPeakRegistrationError;
@property float testMinRegionOfInterestSize;
@property float testMaxRegistrationErrorSkewness;
@property float testMaxRegistrationErrorIntegral;
@property float testAverageCameraTravelDistance;
@property float testAverageRegistrationErrorSkewness;
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;


- (void)setTestMaxRegistrationErrorSkewness:(float)arg1;
- (float)testMaxRegistrationErrorSkewness;
- (void)setTestMinRegionOfInterestSize:(float)arg1;
- (float)testMinRegionOfInterestSize;
- (void)setTestAverageRegistrationErrorSkewness:(float)arg1;
- (float)testAverageRegistrationErrorSkewness;
- (void)setTestMaxInnerDistance:(float)arg1;
- (float)testMaxInnerDistance;
- (void)setTestInOutRatio:(float)arg1;
- (float)testInOutRatio;
- (void)setTestBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix:(float)arg1;
- (float)testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
- (void)setTestMeanPeakRegistrationError:(float)arg1;
- (float)testMeanPeakRegistrationError;
- (void)setTestMaxPeakRegistrationError:(float)arg1;
- (float)testMaxPeakRegistrationError;
- (void)setTestMaxRegistrationErrorIntegral:(float)arg1;
- (float)testMaxRegistrationErrorIntegral;
- (void)setTestAverageCameraTravelDistance:(float)arg1;
- (float)testAverageCameraTravelDistance;
- (BOOL)isBurstAction;
- (float)predictResult;
- (void)scaleVector;
- (double)computeKernelValueWithSupportVector:(const struct CIBurstSupportVector { double x1; double x2[7]; }*)arg1;
- (id)init;

@end