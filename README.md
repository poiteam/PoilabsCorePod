# PoilabsCore iOS Framework

## Overview

PoilabsCore is an iOS framework that provides indoor navigation and routing functionality for iOS applications. The framework includes core features such as route calculation, turn-by-turn navigation, and location updates.

## Installation

### Using CocoaPods

Add the following line to your Podfile:

````ruby
pod 'PoilabsCore', '~> 1.0.12'
````

Then run in terminal:

````bash
pod install
````

### Using Swift Package Manager

1. In Xcode, select File > Add Packages...
2. Enter the package repository URL:
````
https://github.com/poiteam/PoilabsCorePod.git
````
3. Select the version you want to use
4. Click Add Package

## System Requirements

- iOS 11.0 or later
- Xcode 12.0 or later
- Arm64 architecture support

## Core Features

### Route Calculation
- Find shortest path
- Create multi-point routes
- Find nearest point of specific type
- Sort points by distance

### Navigation
- Turn-by-turn guidance
- Floor change support
- Real-time location updates
- Distance and direction information

### Step Types
- Basic directions (right, left, straight)
- Slight directions (slight right, slight left)
- Vertical movements (up, down)
- Special cases (arrival, building pass)

### Available Methods
- Route finding between points
- Graph creation from POI data
- Location and heading updates
- Step distance configuration
- Floor change method settings

## License

Proprietary - All rights reserved by Poilabs. This software is licensed only to authorized users.

## Contact

For technical support and inquiries:
- Emre Kuru (emre@poilabs.com)
- [GitHub](https://github.com/poiteam/PoilabsCorePod)

## Version History

Current version: 1.0.12

---

*Note: This framework is developed and maintained by Poilabs.*
