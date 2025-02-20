// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PoilabsCore",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "PoilabsCore",
            targets: ["PoilabsCore"])
    ],
    targets: [
        .binaryTarget(
            name: "PoilabsCore",
            path: "PoilabsCore.xcframework"
        )
    ]
) 