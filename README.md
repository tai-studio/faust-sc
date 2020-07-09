# faust-sc

DSP function definitions for the [FAUST](https://faustdoc.grame.fr/) dsp language inspired by the interface of standard SuperCollider UGens.

## Implemented

+ `impulse` — `Impulse`
+ `lfsaw` — `LFsaw`
+ `sinosc` — `SinOsc`
+ `lfpulse` — `LFPulse`
+ `lftri` — `LFTri`
+ `mod` — `%` (modulo)
    + <math xmlns="http://www.w3.org/1998/Math/MathML"> <mstyle displaystyle="true"> <mi> mod </mi> <mo> : </mo> <msup> <mrow> <mtext> &#x211D;<!--double-struck capital R--> </mtext> </mrow> <mrow> <mn> 2 </mn> </mrow> </msup> <mo> &#x2192;<!--rightwards arrow--> </mo> <msup> <mrow> <mtext> &#x211D;<!--double-struck capital R--> </mtext> </mrow> <mrow> <mo> + </mo> </mrow> </msup> </mstyle> </math>
+ `size` — `Array:size`
+ `wrapAt` — `Array:wrapAt`
+ `at` — `Array:at`
+ `wrap2` — `UGen:wrap2`
+ `wrap` — `UGen:wrap`
+ `clip2` — `UGen:clip2`
+ `clip` — `UGen:clip`
+ `fold` — `UGen:fold`
+ `fold2` — `UGen:fold2`
+ `sinoscfb` — `SinOscFB`
+ `pmosc` — `PMOsc`

## Acknowledgements

This implementation has been partially funded by [RottingSounds](http://rottingsounds.org) (project AR 445-G24) by the Austrian Science Fund (FWF).
