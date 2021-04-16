# faust-sc
*2020, LFSaw ([interaction](http://tai-studio.org) | [music](http://lfsaw.de))*

DSP function definitions for the [FAUST](https://faustdoc.grame.fr/) dsp language inspired by [SuperCollider](http://supercollider.github.io) functionality.


- [faust-sc](#faust-sc)
  - [scUgens.lib](#scugenslib)
    - [Synthesis / Oscillators](#synthesis--oscillators)
      - [impulse](#impulse)
      - [lfsaw](#lfsaw)
      - [lfsaw_uni](#lfsaw_uni)
      - [sinosc](#sinosc)
      - [lfpulse](#lfpulse)
      - [lftri](#lftri)
      - [pmosc](#pmosc)
      - [sinoscfb](#sinoscfb)
      - [sinoscfb_p](#sinoscfb_p)
      - [pmosc](#pmosc-1)
    - [Noise](#noise)
      - [whitenoise](#whitenoise)
      - [pinknoise](#pinknoise)
      - [dust](#dust)
      - [hasher](#hasher)
    - [Filter](#filter)
      - [lpf](#lpf)
      - [leakdc](#leakdc)
    - [Tools](#tools)
      - [mod](#mod)
      - [linlin](#linlin)
      - [linexp](#linexp)
      - [explin](#explin)
      - [wrap2](#wrap2)
      - [wrap](#wrap)
      - [clip2](#clip2)
      - [clip](#clip)
      - [fold2](#fold2)
      - [fold](#fold)
    - [Array-methods for lists](#array-methods-for-lists)
      - [size_list](#size_list)
      - [wrapAt_list](#wrapat_list)
      - [at_list](#at_list)
      - [rotate_list](#rotate_list)
      - [rotate](#rotate)
      - [drop_list](#drop_list)
      - [keep_list](#keep_list)
      - [reverse_list](#reverse_list)
    - [Triggers and gates](#triggers-and-gates)
      - [trig_1](#trig_1)
      - [trig1_1](#trig1_1)
      - [latch](#latch)
      - [gate](#gate)
    - [Demand-like](#demand-like)
      - [demand_1](#demand_1)
      - [tdemand_1](#tdemand_1)
  - [taiStudio.lib](#taistudiolib)
    - [low-level signal features](#low-level-signal-features)
      - [strictRising](#strictrising)
      - [strictFalling](#strictfalling)
      - [changed](#changed)
      - [falling](#falling)
      - [rising](#rising)
      - [unchanged](#unchanged)
    - [bit operations](#bit-operations)
      - [bitNot](#bitnot)
      - [left_shift](#left_shift)
      - [right_shift](#right_shift)
    - [Synthesis / Oscillators](#synthesis--oscillators-1)
      - [phasor](#phasor)
      - [sineosc_s](#sineosc_s)
      - [funcosc](#funcosc)
      - [func2waveform](#func2waveform)
    - [Maths](#maths)
      - [tanh_approx](#tanh_approx)
      - [map](#map)
    - [Stereo processing](#stereo-processing)
      - [ms](#ms)
      - [rotate2](#rotate2)
  - [taiRand.lib](#tairandlib)
    - [Hashing](#hashing)
      - [ihash](#ihash)
      - [fhash](#fhash)
    - [Audio-rate random generators](#audio-rate-random-generators)
      - [taus_rand](#taus_rand)
      - [taus_rand_normed](#taus_rand_normed)
      - [rand1](#rand1)
      - [rand2](#rand2)
      - [rand](#rand)
      - [rrand](#rrand)
      - [irand](#irand)
      - [irand2](#irand2)
      - [irrand](#irrand)
  - [Acknowledgements and Support](#acknowledgements-and-support)

------------------

## scUgens.lib

```
sc = import("scUGens.lib") 
```

### Synthesis / Oscillators

#### impulse
```
process = sc.impulse(freq, phase) : _;
```
See SuperCollider reference for [Impulse](http://doc.sccode.org/Classes/Impulse.html) for details.

#### lfsaw
```
process = sc.lfsaw(freq, phase) : _;
```
See SuperCollider reference for [LFsaw](http://doc.sccode.org/Classes/LFSaw.html) for details.

#### lfsaw_uni
unipolar `LFSaw`

```
process = sc.lfsaw_uni(freq, phase) : _;
```

#### sinosc
```
process = sc.sinosc(freq, phase)
```
See SuperCollider reference for [SinOsc](http://doc.sccode.org/Classes/SinOsc.html) for details.

#### lfpulse
```
process = sc.lfpulse(freq, width, phase)
```
See SuperCollider reference for [LFPulse](http://doc.sccode.org/Classes/LFPulse.html) for details.

#### lftri
```
process = sc.lftri(freq, phase)
```
See SuperCollider reference for [LFTri](http://doc.sccode.org/Classes/LFTri.html) for details.

#### pmosc
```
process = sc.sc.pmosc(...);
```
See SuperCollider reference for [PMOsc](http://doc.sccode.org/Classes/PMOsc.html) for details.

#### sinoscfb
```
process = sc.sinoscfb(freq, feedback) : _;
```
See SuperCollider reference for [SinOscFB](http://doc.sccode.org/Classes/SinOscFB.html) for details.

#### sinoscfb_p
SinOscFB with additional phase modulation input
```
process = sinoscfb_p(freq, phase, feedback) : _;
```

#### pmosc
```
process = sc.sc.pmosc(...);
```
See SuperCollider reference for [PMOsc](http://doc.sccode.org/Classes/PMOsc.html) for details.

### Noise

#### whitenoise
```
process = sc.whitenoise(amp) : _;
```
See SuperCollider reference for [WhiteNoise](http://doc.sccode.org/Classes/WhiteNoise.html) for details.

#### pinknoise
```
process = sc.pinknoise(amp) : _;
```
See SuperCollider reference for [PinkNoise](http://doc.sccode.org/Classes/PinkNoise.html) for details.

#### dust
```
process = sc.dust(density) : _;
```
See SuperCollider reference for [Dust](http://doc.sccode.org/Classes/Dust.html) for details.

#### hasher
```
process = sc.hasher(v) : _;
```
See SuperCollider reference for [Hasher](http://doc.sccode.org/Classes/Hasher.html) for details.


### Filter


#### lpf

2-nd order butterworth filter

```
process = _ : sc.lpf(freq) : _;
```
See SuperCollider reference for [LPF](http://doc.sccode.org/Classes/LPF.html) for details.

#### leakdc




### Tools


#### mod

save modulo (SC style)

<math xmlns="http://www.w3.org/1998/Math/MathML"> <mstyle displaystyle="true"> <mi> mod </mi> <mo> : </mo> <msup> <mrow> <mtext> &#x211D;<!--double-struck capital R--> </mtext> </mrow> <mrow> <mn> 2 </mn> </mrow> </msup> <mo> &#x2192;<!--rightwards arrow--> </mo> <msup> <mrow> <mtext> &#x211D;<!--double-struck capital R--> </mtext> </mrow> <mrow> <mo> + </mo> </mrow> </msup> </mstyle> </math>


```
process = sc.mod(a, b);
```


#### linlin

SC-style linear mapping.
See SuperCollider reference for [linlin](http://doc.sccode.org/Overviews/Methods.html#linlin) for details.
```
process = _ : sc.linlin(0, 1, 4, 10) : _;
```

#### linexp

SC-style exponential mapping.
See SuperCollider reference for [linexp](http://doc.sccode.org/Overviews/Methods.html#linexp) for details.
```
process = _ : sc.linexp(0, 1, 4, 10) : _;
```

#### explin

SC-style exponential mapping.
See SuperCollider reference for [explin](http://doc.sccode.org/Overviews/Methods.html#explin) for details.
```
process = _ : sc.explin(1, 3, 4, 10) : _;
```

#### wrap2

SC-style `wrap2` a signal.
See SuperCollider reference for [wrap2](http://doc.sccode.org/Overviews/Methods.html#wrap2) for details.

```
process = _ : sc.wrap2(hi) : _;
```


#### wrap

SC-style `wrap` a signal.
See SuperCollider reference for [wrap](http://doc.sccode.org/Overviews/Methods.html#wrap) for details.

```
process = _ : sc.wrap(lo, hi) : _;
```


#### clip2

SC-style `clip2` a signal.
See SuperCollider reference for [clip2](http://doc.sccode.org/Overviews/Methods.html#clip2) for details.

```
process = _ : sc.clip2(hi) : _;
```


#### clip

SC-style `clip` a signal.
See SuperCollider reference for [clip](http://doc.sccode.org/Overviews/Methods.html#clip) for details.


```
process = _ : sc.clip(lo, hi) : _;
```

#### fold2

SC-style `fold2` a signal.
See SuperCollider reference for [fold2](http://doc.sccode.org/Overviews/Methods.html#fold2) for details.

```
process = _ : sc.fold2(hi) : _;
```


#### fold

SC-style `fold` a signal.
See SuperCollider reference for [fold](http://doc.sccode.org/Overviews/Methods.html#fold) for details.

```
process = _ : sc.fold(lo, hi) : _;
```


### Array-methods for lists

#### size_list
SuperCollider `Array:size`.
See SuperCollider reference for [size](http://doc.sccode.org/Overviews/Methods.html#size) for details.


```
process = sc.size_list((a, b, ...)) : N;
```


#### wrapAt_list

SuperCollider `Array:wrapAt`.
See SuperCollider reference for [wrapAt](http://doc.sccode.org/Overviews/Methods.html#wrapAt) for details.

```
process = sc.wrapAt_list((a, b, ...), IDX) : _;
```

#### at_list
SuperCollider `Array:at`.
See SuperCollider reference for [at](http://doc.sccode.org/Overviews/Methods.html#at) for details.


```
process = sc.at_list((a, b, ...), IDX) : _;
```


#### rotate_list
SuperCollider `Array:rotate`.
See SuperCollider reference for [rotate](http://doc.sccode.org/Overviews/Methods.html#rotate) for details.

```
process = sc.rotate_list(list, AMOUNT) : si.bus(sc.size(list));
```
#### rotate
SuperCollider `Array:rotate` for inputs.
See SuperCollider reference for [rotate](http://doc.sccode.org/Overviews/Methods.html#rotate) for details.

```
process = si.bus(N) : sc.rotate(N, AMOUNT) : si.bus(N);
```


#### drop_list

SC-style `drop` for lists (drop N left elements).
See SuperCollider reference for [drop](http://doc.sccode.org/Overviews/Methods.html#drop) for details.

```
process = sc.drop_list(list, N) : si.bus(sc.size(list)-N);
```



#### keep_list

SC-style `keep` for lists (keep N left elements).
See SuperCollider reference for [keep](http://doc.sccode.org/Overviews/Methods.html#keep) for details.

```
process = sc.keep_list(list, N) : si.bus(N);
```


#### reverse_list

SC-style `reverse` for lists (reverse N left elements).
See SuperCollider reference for [reverse](http://doc.sccode.org/Overviews/Methods.html#reverse) for details.

```
process = sc.reverse_list(list) : si.bus(sc.size(list));
```







### Triggers and gates
#### trig_1

SC-style `Trig` with 1-sample duration .
See SuperCollider reference for [Trig](http://doc.sccode.org/Classes/Trig.html) for details.

#### trig1_1

SC-style `Trig1` with 1-sample duration.
See SuperCollider reference for [Trig1](http://doc.sccode.org/Classes/Trig1.html) for details.

#### latch

SC-style `Latch`.
See SuperCollider reference for [Latch](http://doc.sccode.org/Classes/Latch.html) for details.

#### gate

SC-style `Gate`.
See SuperCollider reference for [Gate](http://doc.sccode.org/Classes/Gate.html) for details.



### Demand-like

#### demand_1

an attempt at `Demand-like functionality`
See SuperCollider reference for [Demand](http://doc.sccode.org/Classes/Demand.html) for details.

```
process = _ : sc.demand_1(f) : _;
```

#### tdemand_1

like `demand` but returning triggers

```
process = _ : sc.tdemand_1(f) : _;
```



## taiStudio.lib


### low-level signal features
shameless copy from [this issue](https://github.com/grame-cncm/faustlibraries/issues/45)

#### strictRising
1 for strictly rising, 0 otherwise.


```
process = _ : lf.strictRising : _
```


#### strictFalling
1 for strictly falling, 0 otherwise.

```
process = _ : lf.strictFalling : _
```


#### changed
1 if signal changes, 0 otherwise.

```
process = _ : lf.changed : _;
```


#### falling
1 for falling or unchanged, 0 otherwise.

```
process = _ : lf.falling : _;
```


#### rising
1 for rising or unchanged, 0 otherwise.

```
process = _ : lf.rising : _;
```


#### unchanged
1 for unchanged, 0 otherwise .

```
process = _ : lf.unchanged : _;
```

### bit operations

#### bitNot

bitwise Not

 ```
process = 16: lf.bitNot;
 ```

#### left_shift

unsigned left shift operator

 ```
process = _ : lf.left_shift(_);
 ```

#### right_shift

unsigned right shift operator

 ```
process = _ : lf.right_shift(_);
 ```

///////////


### Synthesis / Oscillators

#### phasor

A resettable phasor.

```
process = lf.phasor(freq, phase, reset, length) : _;
```

#### sineosc_s

A hardsynced sine wave with phase offset.

```
process = lf.sineosc_s(freq, phase, sync) : _;
```

#### funcosc

A function oscillator.

```
process = lf.funcosc(func, freq, phase, reset);
```

#### func2waveform

A turn a function (with one variable) into a waveform.

```
process = lf.func2waveform(function, size) : _,_;
```

### Maths

#### tanh_approx

an approximation of tanh

#### map

map from one value range to another

### Stereo processing

#### ms

convert a stereo AB signal into a mid-side (MS) signal and vice-versa.

#### rotate2

Rotate2 does an equal power rotation so it works well on stereo sounds. 

It computes

```
xout = cos(angle) * xin + sin(angle) * yin;
yout = cos(angle) * yin - sin(angle) * xin;
```

where `angle = pos * pi`, so that `-1` becomes `-pi` and `+1` becomes `+pi`.

## taiRand.lib

### Hashing

#### ihash
An integer hash.

```
process = int(_): rnd.ihash : _;
```

#### fhash
A float hash of an arbitrary number (range doesn't matter), output between `[0..1]`.

```
process = _: rnd.fhash : _;
```

### Audio-rate random generators

#### taus_rand
generates random integer values in the range [0, 2147483647] at sample rate. Based on JMC's implementation of the `Ran088: L'Ecuyer's 1996 three-component Tausworthe generator "taus88"`.

```
process = rnd.taus_rand(s1, s2, s3) : _;
```

with
+ `s1 >  2` — (int) 1st seed
+ `s2 >  8` — (int) 2nd seed
+ `s3 > 16` — (int) 3rd seed

#### taus_rand_normed
`taus-rand` normed to a range [0..1]

```
process = rnd.taus_rand_normed(s1, s2, s3) : _;
```

with
+ `s1 >  2` — (int) 1st seed
+ `s2 >  8` — (int) 2nd seed
+ `s3 > 16` — (int) 3rd seed

#### rand1
random values between `[0..1]` given a single seed (based on `taus_rand`).

```
process = rnd.rand1(1248245) : _;
```


#### rand2
random values between `[-r_max..r_max]`.

```
process = rnd.rand2(1248245, 1) : _;
```


#### rand
random values between `[0..r_max]`.

```
process = rnd.rand(1248245, 1) : _;
```


#### rrand
random values between `[r_min..r_max]`.

```
process = rnd.rrand(1248245, -1, 1) : _;
```


#### irand
random values (int) between `[0..r_max]`.

```
process = rnd.irand(1248245, 1) : _;
```


#### irand2
random values (int) between `[-r_max..r_max]`.

```
process = rnd.irand2(1248245, 10) : _;
```


#### irrand
random values (int) between `[r_min..r_max]`.

```
process = rnd.irrand(1248245, 5, 10) : _;
```




## Acknowledgements and Support

*Though, most of the research that went into this repository is done in my spare time, it has also been partially funded by the [RottingSounds](http://rottingsounds.org) (project AR 445-G24, awarded by the Austrian Science Fund (FWF)).*

Please support me by listening to (and possibly purchasing) my music on [bandcamp](http://lfsaw.bandcamp.com).

[![ko-fi](https://www.ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/S6S72858T)
