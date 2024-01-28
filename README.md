# Mastering-Embedded-Systems-Online-Diploma
![Embedded Systems Online Diploma](https://github.com/Medosha22/Mastering-Embedded-Systems-Online-Diploma/assets/125259963/7acb58f6-00c9-45a6-99fb-b39824cd0452)
<br />
# Contents
## First Term  https://progress-bar.dev/<10%>?title=<In_Progress>
import * as React from "react";
import { useNavigation } from "@remix-run/react";
import { cx } from "~/utils";

function GlobalLoading() {
  const navigation = useNavigation();
  const active = navigation.state !== "idle";

  const ref = React.useRef<HTMLDivElement>(null);
  const [animationComplete, setAnimationComplete] = React.useState(true);

  React.useEffect(() => {
    if (!ref.current) return;
    if (active) setAnimationComplete(false);

    Promise.allSettled(
      ref.current.getAnimations().map(({ finished }) => finished)
    ).then(() => !active && setAnimationComplete(true));
  }, [active]);

  return (
    <div role="progressbar" {...}>
      <div ref={ref} {...} />
    </div>
  );
}

export { GlobalLoading };
