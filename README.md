# faust-sc
*2020, LFSaw ([interaction](http://tai-studio.org) | [music](http://lfsaw.de))*

DSP function definitions for the [FAUST](https://faustdoc.grame.fr/) dsp language inspired by [SuperCollider](http://supercollider.github.io) functionality.


* [scUgens.lib](#scugenslib)
  + [Synthesis](#synthesis)
    - [hasher](#hasher)
    - [impulse](#impulse)
    - [lfsaw](#lfsaw)
    - [lfsaw_uni](#lfsaw-uni)
    - [sinosc](#sinosc)
    - [lfpulse](#lfpulse)
    - [lftri](#lftri)
    - [pmosc](#pmosc)
    - [sinoscfb](#sinoscfb)
    - [sinoscfb_p](#sinoscfb-p)
    - [pmosc](#pmosc-1)
  + [Noise](#noise)
    - [whitenoise](#whitenoise)
    - [pinknoise](#pinknoise)
    - [dust](#dust)
  + [Filter](#filter)
    - [lpf](#lpf)
  + [Tools](#tools)
    - [mod](#mod)
    - [linlin](#linlin)
  + [Array-methods for lists](#array-methods-for-lists)
    - [size](#size)
    - [wrapAt](#wrapat)
    - [at](#at)
    - [rotate](#rotate)
    - [drop](#drop)
    - [keep](#keep)
    - [reverse](#reverse)
  + [Waveform manipulation](#waveform-manipulation)
    - [wrap2](#wrap2)
    - [wrap](#wrap)
    - [clip2](#clip2)
    - [clip](#clip)
    - [fold](#fold)
    - [fold2](#fold2)
  + [Triggers and gates](#triggers-and-gates)
    - [trig_1](#trig-1)
    - [trig1_1](#trig1-1)
    - [latch](#latch)
    - [gate](#gate)
  + [Demand-like](#demand-like)
    - [demand_1](#demand-1)
    - [tdemand_1](#tdemand-1)
* [taiStudio.lib](#taistudiolib)
  + [Signal tools](#signal-tools)
    - [strictRising](#strictrising)
    - [strictFalling](#strictfalling)
    - [changed](#changed)
    - [falling](#falling)
    - [rising](#rising)
    - [unchanged](#unchanged)
  + [bit operations](#bit-operations)
    - [bitNot](#bitnot)
    - [left_shift](#left-shift)
    - [right_shift](#right-shift)
    - [Synthesis](#synthesis-1)
    - [phasor](#phasor)
    - [sineosc_s](#sineosc-s)
    - [funcosc](#funcosc)
    - [func2waveform](#func2waveform)
* [taiRand.lib](#tairandlib)
  + [Hashing](#hashing)
    - [ihash](#ihash)
    - [fhash](#fhash)
  + [Audio-rate random generators](#audio-rate-random-generators)
    - [taus_rand](#taus-rand)
    - [taus_rand_normed](#taus-rand-normed)
    - [rand1](#rand1)
    - [rand2](#rand2)
    - [rand](#rand)
    - [rrand](#rrand)
    - [irand](#irand)
    - [irand2](#irand2)
    - [irrand](#irrand)
* [Acknowledgements and Support](#acknowledgements-and-support)

------------------

## scUgens.lib

```
sc = import("scUGens.lib") 
```

### Synthesis

#### hasher
```
process = sc.hasher(v) : _;
```
See SuperCollider reference for [Hasher](http://doc.sccode.org/Classes/Hasher.html) for details.

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



### Filter


#### lpf

2-nd order butterworth filter

```
process = _ : sc.lpf(freq) : _;
```
See SuperCollider reference for [LPF](http://doc.sccode.org/Classes/LPF.html) for details.




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



### Array-methods for lists

#### size
SuperCollider `Array:size`.
See SuperCollider reference for [size](http://doc.sccode.org/Overviews/Methods.html#size) for details.


```
process = sc.size((a, b, ...)) : N;
```


#### wrapAt

SuperCollider `Array:wrapAt`.
See SuperCollider reference for [wrapAt](http://doc.sccode.org/Overviews/Methods.html#wrapAt) for details.

```
process = sc.wrapAt((a, b, ...), IDX) : _;
```

#### at
SuperCollider `Array:at`.
See SuperCollider reference for [at](http://doc.sccode.org/Overviews/Methods.html#at) for details.


```
process = sc.at((a, b, ...), IDX) : _;
```


#### rotate
SuperCollider `Array:rotate`.
See SuperCollider reference for [rotate](http://doc.sccode.org/Overviews/Methods.html#rotate) for details.

```
process = sc.rotate(list, AMOUNT) : si.bus(sc.size(list));
```


#### drop

SC-style `drop` for lists (drop N left elements).
See SuperCollider reference for [drop](http://doc.sccode.org/Overviews/Methods.html#drop) for details.

```
process = sc.drop(list, N) : si.bus(sc.size(list)-N);
```



#### keep

SC-style `keep` for lists (keep N left elements).
See SuperCollider reference for [keep](http://doc.sccode.org/Overviews/Methods.html#keep) for details.

```
process = sc.keep(list, N) : si.bus(N);
```


#### reverse

SC-style `reverse` for lists (reverse N left elements).
See SuperCollider reference for [reverse](http://doc.sccode.org/Overviews/Methods.html#reverse) for details.

```
process = sc.reverse(list) : si.bus(sc.size(list));
```





### Waveform manipulation
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


#### fold

SC-style `fold` a signal.
See SuperCollider reference for [fold](http://doc.sccode.org/Overviews/Methods.html#fold) for details.

```
process = _ : sc.fold(lo, hi) : _;
```


#### fold2

SC-style `fold2` a signal.
See SuperCollider reference for [fold2](http://doc.sccode.org/Overviews/Methods.html#fold2) for details.

```
process = _ : sc.fold2(hi) : _;
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


### Signal tools
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


#### Synthesis

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
