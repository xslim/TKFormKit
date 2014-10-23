#
# Be sure to run `pod lib lint TKFormKit.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "TKFormKit"
  s.version          = "0.1.0"
  s.summary          = "Easy way to create forms"
  s.description      = <<-DESC
                        Easy way to make your forms in UITableView
                       DESC
  s.homepage         = "https://github.com/<GITHUB_USERNAME>/TKFormKit"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Taras Kalapun" => "t.kalapun@gmail.com" }
  s.source           = { :git => "https://github.com/xslim/TKFormKit.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/xslim'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*.{h,m}'
  s.resource_bundles = {
    'TKFormKit' => ['Pod/Assets/*.png']
  }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
