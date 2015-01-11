#FakeWatchApp

This is just a proof of concept to get WatchKit on the simulator.

To get this working, drag the ./Headers folder into /Applications/Xcode-Beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PepperUICore.framework

PepperUICore should be linked in the Target in the project.

Thanks to [Deallocated Objects](https://deallocatedobjects.com/posts/confirmed-apple-watch-runs-ios), [Nick Frey](https://github.com/nickfrey/WatchOS-Headers) and [Steve Stroughton-Smith](https://twitter.com/stroughtonsmith/status/554002221957148673) for the right direction.