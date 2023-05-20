#import "AppDelegate.h"

#import <React/RCTBundleURLProvider.h>
#import <React/RCTAssert.h>

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
  self.moduleName = @"rndemo";
  // You can add your custom initial props in the dictionary below.
  // They will be passed down to the ViewController used by React Native.
  self.initialProps = @{};

  RCTSetFatalHandler(^(NSError *error) {
    [self throwException:error];
  });
  
  return [super application:application didFinishLaunchingWithOptions:launchOptions];
}

- (NSURL *)sourceURLForBridge:(RCTBridge *)bridge
{
#if DEBUG
  return [[RCTBundleURLProvider sharedSettings] jsBundleURLForBundleRoot:@"index"];
#else
  return [[NSBundle mainBundle] URLForResource:@"main" withExtension:@"jsbundle"];
#endif
}

/// This method controls whether the `concurrentRoot`feature of React18 is turned on or off.
///
/// @see: https://reactjs.org/blog/2022/03/29/react-v18.html
/// @note: This requires to be rendering on Fabric (i.e. on the New Architecture).
/// @return: `true` if the `concurrentRoot` feature is enabled. Otherwise, it returns `false`.
- (BOOL)concurrentRootEnabled
{
  return true;
}

- (void)throwException:(NSError *)error {
    NSString *name = [NSString stringWithFormat:@"%@: %@", RCTFatalExceptionName, error.localizedDescription];

    // Truncate the localized description to 175 characters to avoid wild screen overflows
    NSString *message = RCTFormatError(error.localizedDescription, error.userInfo[RCTJSStackTraceKey], 175);

    // Attach an untruncated copy of the description to the userInfo, in case it is needed
    NSMutableDictionary *userInfo = [error.userInfo mutableCopy];
    userInfo[@"RCTUntruncatedMessageKey"] = RCTFormatError(error.localizedDescription, error.userInfo[RCTJSStackTraceKey], -1);

    // Expected resulting exception information:
    // name: RCTFatalException: <underlying error description>
    // reason: <underlying error description plus JS stack trace, truncated to 175 characters>
    // userInfo: <underlying error userinfo, plus untruncated description plus JS stack trace>
    NSException *exception = [[NSException alloc]  initWithName:name reason:message userInfo:userInfo];

    @throw exception;
}


@end
