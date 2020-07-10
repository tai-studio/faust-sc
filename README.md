# faust-sc
*2020, LFSaw ([interaction](http://tai-studio.org) | [music](http://lfsaw.de))*


DSP function definitions for the [FAUST](https://faustdoc.grame.fr/) dsp language inspired by the interface of standard SuperCollider UGens.

## Implemented

### scUgens.lib


#### Synthesis
+ `impulse` — `Impulse`
+ `lfsaw` — `LFsaw`
    * `lfsaw_uni` — unipolar `LFSaw`
+ `sinosc` — `SinOsc`
+ `lfpulse` — `LFPulse`
+ `lftri` — `LFTri`
+ `pmosc` — `PMOsc`
+ `sinoscfb` — `SinOscFB`

#### Tools

+ `mod` — `%` (modulo)
    + <math xmlns="http://www.w3.org/1998/Math/MathML"> <mstyle displaystyle="true"> <mi> mod </mi> <mo> : </mo> <msup> <mrow> <mtext> &#x211D;<!--double-struck capital R--> </mtext> </mrow> <mrow> <mn> 2 </mn> </mrow> </msup> <mo> &#x2192;<!--rightwards arrow--> </mo> <msup> <mrow> <mtext> &#x211D;<!--double-struck capital R--> </mtext> </mrow> <mrow> <mo> + </mo> </mrow> </msup> </mstyle> </math>

#### Array-methods for lists

+ `size` — `Array:size`
+ `wrapAt` — `Array:wrapAt`
+ `at` — `Array:at`

#### Waveform manipulation
+ `wrap2` — `UGen:wrap2`
+ `wrap` — `UGen:wrap`
+ `clip2` — `UGen:clip2`
+ `clip` — `UGen:clip`
+ `fold` — `UGen:fold`
+ `fold2` — `UGen:fold2`


#### Triggers and gates
+ `trig_1` — `Trig` with 1-sample duration 
+ `trig1_1` — `Trig1` with 1-sample duration
+ `latch` — `Latch`
+ `gate` — `Gate`

#### Demand-like
+ `demand_1` — an attempt at `Demand-like functionality`
+ `tdemand_1` — like `demand` but returning triggers

### taiStudio.lib

#### Signal tools
shameless copy from [this issue](https://github.com/grame-cncm/faustlibraries/issues/45)

+ `strictRising`
+ `strictFalling` 
+ `changed` 
+ `falling` 
+ `rising` 
+ `unchanged` 

#### Synthesis

+ `phasor` — simple phasor
+ `sineosc_s` — hardsynced sin oscillator
+ `funcosc` — function oscillator
+ `func2waveform` — turn a function (with one variable) into a waveform

## Acknowledgements and Support

*Though, most of the research that went into this repository is done in my spare time, it has also been partially funded by the [RottingSounds](http://rottingsounds.org) (project AR 445-G24, awarded by the Austrian Science Fund (FWF)).*

Please support me by listening to (and possibly purchasing) my music on [bandcamp](http://lfsaw.bandcamp.com).
