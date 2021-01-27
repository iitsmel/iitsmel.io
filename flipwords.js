function fliping(e, t, i) {
    'use strict';
    function n(e) {
        if (this.element = e, this.name = e.getAttribute("flip-name"), this.event = "scroll", this.durationRaw = e.getAttribute("flip-duration"), this.duration = Number(this.durationRaw), isNaN(this.duration) || !isFinite(this.duration) || this.duration < 0)
            this.duration = 0;
        var t = e.getAttribute("flip-event");
        if (t)
            this.event = t;
        if (this.delayRaw = e.getAttribute("flip-elay"), this.delay = 0, this.delayRaw)
            if (this.delay = Number(this.delayRaw), isNaN(this.delay) || !isFinite(this.delay) || this.delay < 0)
                this.delay = 0;
        var i = e.getAttribute("flip-cycle");
        if (i)
            if (i = Number(i), !isNaN(i))
                this.animationCycle = i;
        var n = e.getAttribute("flip-direction");
        if (n)
            this.direction = n
    }
    e.exports = n,
    window.AnimationInfo = e.exports
}



function callAuntie() {
    'use strict';
    console.log('call:', this.auntie);
  }