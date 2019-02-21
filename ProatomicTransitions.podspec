
Pod::Spec.new do |s|
  s.name             = 'ProatomicTransitions'
  s.version          = '0.1.8'
  s.summary          = 'A base for transitions.'
  s.description      = 'Proatomic transitions for iOS.'
  s.homepage         = 'http://proatomicdev.com'
  s.license          = { :type => 'Copyright', :text => 'Copyright 2016 Proatomic' }
  s.author           = { 'Guillermo Saenz' => 'gsaenz@proatomicdev.com' }
  s.source           = { :git => 'https://github.com/ProAtomic/ProatomicTransitions.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.default_subspecs = [
'Core'
  ]

  s.subspec 'Core' do |ss|
      ss.dependency 'pop'
    ss.vendored_frameworks = [ 'ProatomicTransitions/Frameworks/ProatomicTransitions-Release-iphoneuniversal/ProatomicTransitions.framework' ]
  end
end
