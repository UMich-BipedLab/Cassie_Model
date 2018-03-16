/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:01 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t2244;
  double t2253;
  double t2254;
  double t2242;
  double t2255;
  double t2213;
  double t2252;
  double t2257;
  double t2273;
  double t2278;
  double t2279;
  double t2282;
  double t2283;
  double t2298;
  double t2308;
  double t2312;
  double t2317;
  double t2292;
  double t2295;
  double t2296;
  double t2324;
  double t2347;
  double t2350;
  double t2351;
  double t2360;
  double t2343;
  double t2345;
  double t2346;
  double t2372;
  double t2374;
  double t2376;
  double t2385;
  double t2387;
  double t2388;
  double t2390;
  double t2393;
  double t2394;
  double t2395;
  double t2402;
  double t2403;
  double t2405;
  double t2407;
  double t2409;
  double t2411;
  double t2414;
  double t2419;
  double t2422;
  double t2423;
  double t2433;
  double t2434;
  double t2436;
  double t2215;
  double t2226;
  double t2239;
  double t2241;
  double t2289;
  double t2290;
  double t2449;
  double t2450;
  double t2451;
  double t2453;
  double t2454;
  double t2455;
  double t2315;
  double t2318;
  double t2321;
  double t2328;
  double t2329;
  double t2334;
  double t2457;
  double t2458;
  double t2459;
  double t2357;
  double t2362;
  double t2367;
  double t2378;
  double t2379;
  double t2383;
  double t2389;
  double t2391;
  double t2392;
  double t2469;
  double t2470;
  double t2471;
  double t2474;
  double t2475;
  double t2477;
  double t2398;
  double t2400;
  double t2401;
  double t2412;
  double t2415;
  double t2417;
  double t2480;
  double t2482;
  double t2483;
  double t2486;
  double t2487;
  double t2488;
  double t2427;
  double t2429;
  double t2431;
  double t2490;
  double t2491;
  double t2492;
  double t2494;
  double t2495;
  double t2496;
  double t2509;
  double t2510;
  double t2511;
  double t2518;
  double t2519;
  double t2520;
  double t2522;
  double t2523;
  double t2524;
  double t2526;
  double t2527;
  double t2528;
  double t2530;
  double t2531;
  double t2532;
  double t2534;
  double t2535;
  double t2536;
  double t2538;
  double t2539;
  double t2540;
  double t2553;
  double t2554;
  double t2555;
  double t2562;
  double t2563;
  double t2564;
  double t2566;
  double t2567;
  double t2568;
  double t2570;
  double t2571;
  double t2572;
  double t2574;
  double t2575;
  double t2576;
  double t2578;
  double t2579;
  double t2580;
  double t2582;
  double t2583;
  double t2584;
  double t2597;
  double t2598;
  double t2599;
  double t2606;
  double t2607;
  double t2608;
  double t2610;
  double t2611;
  double t2612;
  double t2614;
  double t2615;
  double t2616;
  double t2618;
  double t2619;
  double t2620;
  double t2622;
  double t2623;
  double t2624;
  double t2626;
  double t2627;
  double t2628;
  double t2640;
  double t2641;
  double t2642;
  double t2644;
  double t2645;
  double t2649;
  double t2650;
  double t2651;
  double t2653;
  double t2654;
  double t2655;
  double t2657;
  double t2658;
  double t2659;
  double t2661;
  double t2662;
  double t2663;
  double t2665;
  double t2666;
  double t2667;
  double t2678;
  double t2679;
  double t2680;
  double t2683;
  double t2684;
  double t2685;
  double t2689;
  double t2690;
  double t2692;
  double t2693;
  double t2694;
  double t2696;
  double t2697;
  double t2698;
  double t2700;
  double t2701;
  double t2702;
  double t2704;
  double t2705;
  double t2706;
  double t2719;
  double t2720;
  double t2721;
  double t2725;
  double t2726;
  double t2727;
  double t2729;
  double t2730;
  double t2731;
  double t2733;
  double t2734;
  double t2735;
  double t2737;
  double t2738;
  double t2739;
  double t2741;
  double t2742;
  double t2743;
  double t2759;
  double t2760;
  double t2762;
  double t2763;
  double t2764;
  double t2766;
  double t2767;
  double t2768;
  double t2770;
  double t2771;
  double t2772;
  double t2774;
  double t2775;
  double t2776;
  double t2788;
  double t2789;
  double t2790;
  double t2792;
  double t2793;
  double t2797;
  double t2798;
  double t2800;
  double t2801;
  double t2802;
  double t2804;
  double t2805;
  double t2806;
  double t2808;
  double t2809;
  double t2810;
  double t2812;
  double t2813;
  double t2814;
  double t2722;
  double t2723;
  double t2724;
  double t2728;
  double t2732;
  double t2736;
  double t2740;
  double t2744;
  double t2745;
  double t2746;
  double t2747;
  double t2748;
  double t2749;
  double t2750;
  double t2751;
  double t2752;
  double t2462;
  double t2464;
  double t2466;
  double t2842;
  double t2843;
  double t2844;
  double t2846;
  double t2847;
  double t2848;
  double t2828;
  double t2829;
  double t2830;
  double t2832;
  double t2833;
  double t2860;
  double t2861;
  double t2862;
  double t2864;
  double t2865;
  double t2866;
  double t2873;
  double t2874;
  double t2875;
  double t2877;
  double t2878;
  double t2879;
  double t2891;
  double t2892;
  double t2893;
  double t2895;
  double t2896;
  double t2897;
  double t2905;
  double t2906;
  double t2907;
  double t2909;
  double t2910;
  double t2911;
  double t2929;
  double t2930;
  double t2931;
  double t2934;
  double t2935;
  double t2937;
  double t2938;
  double t2939;
  double t2922;
  double t2923;
  double t2925;
  double t2926;
  double t2927;
  double t2951;
  double t2952;
  double t2953;
  double t2955;
  double t2956;
  double t2957;
  double t2959;
  double t2960;
  double t2961;
  double t2963;
  double t2964;
  double t2965;
  double t2967;
  double t2968;
  double t2969;
  double t2981;
  double t2982;
  double t2983;
  double t2985;
  double t2986;
  double t2987;
  double t2989;
  double t2990;
  double t2991;
  double t2993;
  double t2994;
  double t2995;
  double t2997;
  double t2998;
  double t2999;
  double t3018;
  double t3019;
  double t2502;
  double t3010;
  double t3011;
  double t3012;
  double t3014;
  double t3015;
  double t3029;
  double t3030;
  double t3031;
  double t3034;
  double t3035;
  double t3037;
  double t3038;
  double t3049;
  double t3050;
  double t3051;
  double t3054;
  double t3055;
  double t3057;
  double t3058;
  double t3021;
  double t2503;
  double t2504;
  double t3069;
  double t3070;
  double t3072;
  double t3073;
  double t3074;
  double t3040;
  double t3082;
  double t3083;
  double t3084;
  double t3044;
  double t3060;
  double t3094;
  double t3095;
  double t3096;
  double t3064;
  t2244 = Cos(var1[5]);
  t2253 = Sin(var1[3]);
  t2254 = Sin(var1[4]);
  t2242 = Cos(var1[3]);
  t2255 = Sin(var1[5]);
  t2213 = Cos(var1[6]);
  t2252 = -1.*t2242*t2244;
  t2257 = -1.*t2253*t2254*t2255;
  t2273 = t2252 + t2257;
  t2278 = -1.*t2244*t2253*t2254;
  t2279 = t2242*t2255;
  t2282 = t2278 + t2279;
  t2283 = Sin(var1[6]);
  t2298 = Cos(var1[7]);
  t2308 = -1.*t2298;
  t2312 = 1. + t2308;
  t2317 = Sin(var1[7]);
  t2292 = t2213*t2273;
  t2295 = t2282*t2283;
  t2296 = t2292 + t2295;
  t2324 = Cos(var1[4]);
  t2347 = Cos(var1[8]);
  t2350 = -1.*t2347;
  t2351 = 1. + t2350;
  t2360 = Sin(var1[8]);
  t2343 = -1.*t2324*t2298*t2253;
  t2345 = t2296*t2317;
  t2346 = t2343 + t2345;
  t2372 = t2213*t2282;
  t2374 = -1.*t2273*t2283;
  t2376 = t2372 + t2374;
  t2385 = Cos(var1[9]);
  t2387 = -1.*t2385;
  t2388 = 1. + t2387;
  t2390 = Sin(var1[9]);
  t2393 = t2347*t2346;
  t2394 = t2376*t2360;
  t2395 = t2393 + t2394;
  t2402 = t2347*t2376;
  t2403 = -1.*t2346*t2360;
  t2405 = t2402 + t2403;
  t2407 = Cos(var1[10]);
  t2409 = -1.*t2407;
  t2411 = 1. + t2409;
  t2414 = Sin(var1[10]);
  t2419 = -1.*t2390*t2395;
  t2422 = t2385*t2405;
  t2423 = t2419 + t2422;
  t2433 = t2385*t2395;
  t2434 = t2390*t2405;
  t2436 = t2433 + t2434;
  t2215 = -1.*t2213;
  t2226 = 1. + t2215;
  t2239 = 0.135*t2226;
  t2241 = 0. + t2239;
  t2289 = -0.135*t2283;
  t2290 = 0. + t2289;
  t2449 = -1.*t2244*t2253;
  t2450 = t2242*t2254*t2255;
  t2451 = t2449 + t2450;
  t2453 = t2242*t2244*t2254;
  t2454 = t2253*t2255;
  t2455 = t2453 + t2454;
  t2315 = 0.135*t2312;
  t2318 = 0.049*t2317;
  t2321 = 0. + t2315 + t2318;
  t2328 = -0.049*t2312;
  t2329 = 0.135*t2317;
  t2334 = 0. + t2328 + t2329;
  t2457 = t2213*t2451;
  t2458 = t2455*t2283;
  t2459 = t2457 + t2458;
  t2357 = -0.049*t2351;
  t2362 = -0.09*t2360;
  t2367 = 0. + t2357 + t2362;
  t2378 = -0.09*t2351;
  t2379 = 0.049*t2360;
  t2383 = 0. + t2378 + t2379;
  t2389 = -0.049*t2388;
  t2391 = -0.21*t2390;
  t2392 = 0. + t2389 + t2391;
  t2469 = t2242*t2324*t2298;
  t2470 = t2459*t2317;
  t2471 = t2469 + t2470;
  t2474 = t2213*t2455;
  t2475 = -1.*t2451*t2283;
  t2477 = t2474 + t2475;
  t2398 = -0.21*t2388;
  t2400 = 0.049*t2390;
  t2401 = 0. + t2398 + t2400;
  t2412 = -0.2707*t2411;
  t2415 = 0.0016*t2414;
  t2417 = 0. + t2412 + t2415;
  t2480 = t2347*t2471;
  t2482 = t2477*t2360;
  t2483 = t2480 + t2482;
  t2486 = t2347*t2477;
  t2487 = -1.*t2471*t2360;
  t2488 = t2486 + t2487;
  t2427 = -0.0016*t2411;
  t2429 = -0.2707*t2414;
  t2431 = 0. + t2427 + t2429;
  t2490 = -1.*t2390*t2483;
  t2491 = t2385*t2488;
  t2492 = t2490 + t2491;
  t2494 = t2385*t2483;
  t2495 = t2390*t2488;
  t2496 = t2494 + t2495;
  t2509 = t2242*t2324*t2213*t2255;
  t2510 = t2242*t2324*t2244*t2283;
  t2511 = t2509 + t2510;
  t2518 = -1.*t2242*t2298*t2254;
  t2519 = t2511*t2317;
  t2520 = t2518 + t2519;
  t2522 = t2242*t2324*t2244*t2213;
  t2523 = -1.*t2242*t2324*t2255*t2283;
  t2524 = t2522 + t2523;
  t2526 = t2347*t2520;
  t2527 = t2524*t2360;
  t2528 = t2526 + t2527;
  t2530 = t2347*t2524;
  t2531 = -1.*t2520*t2360;
  t2532 = t2530 + t2531;
  t2534 = -1.*t2390*t2528;
  t2535 = t2385*t2532;
  t2536 = t2534 + t2535;
  t2538 = t2385*t2528;
  t2539 = t2390*t2532;
  t2540 = t2538 + t2539;
  t2553 = t2324*t2213*t2253*t2255;
  t2554 = t2324*t2244*t2253*t2283;
  t2555 = t2553 + t2554;
  t2562 = -1.*t2298*t2253*t2254;
  t2563 = t2555*t2317;
  t2564 = t2562 + t2563;
  t2566 = t2324*t2244*t2213*t2253;
  t2567 = -1.*t2324*t2253*t2255*t2283;
  t2568 = t2566 + t2567;
  t2570 = t2347*t2564;
  t2571 = t2568*t2360;
  t2572 = t2570 + t2571;
  t2574 = t2347*t2568;
  t2575 = -1.*t2564*t2360;
  t2576 = t2574 + t2575;
  t2578 = -1.*t2390*t2572;
  t2579 = t2385*t2576;
  t2580 = t2578 + t2579;
  t2582 = t2385*t2572;
  t2583 = t2390*t2576;
  t2584 = t2582 + t2583;
  t2597 = -1.*t2213*t2254*t2255;
  t2598 = -1.*t2244*t2254*t2283;
  t2599 = t2597 + t2598;
  t2606 = -1.*t2324*t2298;
  t2607 = t2599*t2317;
  t2608 = t2606 + t2607;
  t2610 = -1.*t2244*t2213*t2254;
  t2611 = t2254*t2255*t2283;
  t2612 = t2610 + t2611;
  t2614 = t2347*t2608;
  t2615 = t2612*t2360;
  t2616 = t2614 + t2615;
  t2618 = t2347*t2612;
  t2619 = -1.*t2608*t2360;
  t2620 = t2618 + t2619;
  t2622 = -1.*t2390*t2616;
  t2623 = t2385*t2620;
  t2624 = t2622 + t2623;
  t2626 = t2385*t2616;
  t2627 = t2390*t2620;
  t2628 = t2626 + t2627;
  t2640 = t2244*t2253;
  t2641 = -1.*t2242*t2254*t2255;
  t2642 = t2640 + t2641;
  t2644 = t2642*t2283;
  t2645 = t2474 + t2644;
  t2649 = t2213*t2642;
  t2650 = -1.*t2455*t2283;
  t2651 = t2649 + t2650;
  t2653 = t2347*t2645*t2317;
  t2654 = t2651*t2360;
  t2655 = t2653 + t2654;
  t2657 = t2347*t2651;
  t2658 = -1.*t2645*t2317*t2360;
  t2659 = t2657 + t2658;
  t2661 = -1.*t2390*t2655;
  t2662 = t2385*t2659;
  t2663 = t2661 + t2662;
  t2665 = t2385*t2655;
  t2666 = t2390*t2659;
  t2667 = t2665 + t2666;
  t2678 = t2244*t2253*t2254;
  t2679 = -1.*t2242*t2255;
  t2680 = t2678 + t2679;
  t2683 = t2213*t2680;
  t2684 = t2273*t2283;
  t2685 = t2683 + t2684;
  t2689 = -1.*t2680*t2283;
  t2690 = t2292 + t2689;
  t2692 = t2347*t2685*t2317;
  t2693 = t2690*t2360;
  t2694 = t2692 + t2693;
  t2696 = t2347*t2690;
  t2697 = -1.*t2685*t2317*t2360;
  t2698 = t2696 + t2697;
  t2700 = -1.*t2390*t2694;
  t2701 = t2385*t2698;
  t2702 = t2700 + t2701;
  t2704 = t2385*t2694;
  t2705 = t2390*t2698;
  t2706 = t2704 + t2705;
  t2719 = t2324*t2244*t2213;
  t2720 = -1.*t2324*t2255*t2283;
  t2721 = t2719 + t2720;
  t2725 = -1.*t2324*t2213*t2255;
  t2726 = -1.*t2324*t2244*t2283;
  t2727 = t2725 + t2726;
  t2729 = t2347*t2721*t2317;
  t2730 = t2727*t2360;
  t2731 = t2729 + t2730;
  t2733 = t2347*t2727;
  t2734 = -1.*t2721*t2317*t2360;
  t2735 = t2733 + t2734;
  t2737 = -1.*t2390*t2731;
  t2738 = t2385*t2735;
  t2739 = t2737 + t2738;
  t2741 = t2385*t2731;
  t2742 = t2390*t2735;
  t2743 = t2741 + t2742;
  t2759 = -1.*t2213*t2451;
  t2760 = t2759 + t2650;
  t2762 = t2347*t2477*t2317;
  t2763 = t2760*t2360;
  t2764 = t2762 + t2763;
  t2766 = t2347*t2760;
  t2767 = -1.*t2477*t2317*t2360;
  t2768 = t2766 + t2767;
  t2770 = -1.*t2390*t2764;
  t2771 = t2385*t2768;
  t2772 = t2770 + t2771;
  t2774 = t2385*t2764;
  t2775 = t2390*t2768;
  t2776 = t2774 + t2775;
  t2788 = t2242*t2244;
  t2789 = t2253*t2254*t2255;
  t2790 = t2788 + t2789;
  t2792 = -1.*t2790*t2283;
  t2793 = t2683 + t2792;
  t2797 = -1.*t2213*t2790;
  t2798 = t2797 + t2689;
  t2800 = t2347*t2793*t2317;
  t2801 = t2798*t2360;
  t2802 = t2800 + t2801;
  t2804 = t2347*t2798;
  t2805 = -1.*t2793*t2317*t2360;
  t2806 = t2804 + t2805;
  t2808 = -1.*t2390*t2802;
  t2809 = t2385*t2806;
  t2810 = t2808 + t2809;
  t2812 = t2385*t2802;
  t2813 = t2390*t2806;
  t2814 = t2812 + t2813;
  t2722 = 0.1305*t2298*t2721;
  t2723 = t2721*t2321;
  t2724 = t2721*t2317*t2367;
  t2728 = t2727*t2383;
  t2732 = t2392*t2731;
  t2736 = t2401*t2735;
  t2740 = t2417*t2739;
  t2744 = t2431*t2743;
  t2745 = t2414*t2739;
  t2746 = t2407*t2743;
  t2747 = t2745 + t2746;
  t2748 = -0.0016*t2747;
  t2749 = t2407*t2739;
  t2750 = -1.*t2414*t2743;
  t2751 = t2749 + t2750;
  t2752 = -0.2707*t2751;
  t2462 = t2298*t2459;
  t2464 = -1.*t2242*t2324*t2317;
  t2466 = t2462 + t2464;
  t2842 = -1.*t2347*t2390*t2466;
  t2843 = -1.*t2385*t2466*t2360;
  t2844 = t2842 + t2843;
  t2846 = t2385*t2347*t2466;
  t2847 = -1.*t2390*t2466*t2360;
  t2848 = t2846 + t2847;
  t2828 = 0.135*t2298;
  t2829 = -0.049*t2317;
  t2830 = t2828 + t2829;
  t2832 = 0.049*t2298;
  t2833 = t2832 + t2329;
  t2860 = t2213*t2790;
  t2861 = t2680*t2283;
  t2862 = t2860 + t2861;
  t2864 = t2298*t2862;
  t2865 = -1.*t2324*t2253*t2317;
  t2866 = t2864 + t2865;
  t2873 = -1.*t2347*t2390*t2866;
  t2874 = -1.*t2385*t2866*t2360;
  t2875 = t2873 + t2874;
  t2877 = t2385*t2347*t2866;
  t2878 = -1.*t2390*t2866*t2360;
  t2879 = t2877 + t2878;
  t2891 = t2324*t2213*t2255;
  t2892 = t2324*t2244*t2283;
  t2893 = t2891 + t2892;
  t2895 = t2298*t2893;
  t2896 = t2254*t2317;
  t2897 = t2895 + t2896;
  t2905 = -1.*t2347*t2390*t2897;
  t2906 = -1.*t2385*t2897*t2360;
  t2907 = t2905 + t2906;
  t2909 = t2385*t2347*t2897;
  t2910 = -1.*t2390*t2897*t2360;
  t2911 = t2909 + t2910;
  t2929 = -1.*t2347*t2471;
  t2930 = -1.*t2477*t2360;
  t2931 = t2929 + t2930;
  t2934 = t2390*t2931;
  t2935 = t2934 + t2491;
  t2937 = t2385*t2931;
  t2938 = -1.*t2390*t2488;
  t2939 = t2937 + t2938;
  t2922 = 0.049*t2347;
  t2923 = t2922 + t2362;
  t2925 = -0.09*t2347;
  t2926 = -0.049*t2360;
  t2927 = t2925 + t2926;
  t2951 = t2324*t2298*t2253;
  t2952 = t2862*t2317;
  t2953 = t2951 + t2952;
  t2955 = -1.*t2347*t2953;
  t2956 = -1.*t2793*t2360;
  t2957 = t2955 + t2956;
  t2959 = t2347*t2793;
  t2960 = -1.*t2953*t2360;
  t2961 = t2959 + t2960;
  t2963 = t2390*t2957;
  t2964 = t2385*t2961;
  t2965 = t2963 + t2964;
  t2967 = t2385*t2957;
  t2968 = -1.*t2390*t2961;
  t2969 = t2967 + t2968;
  t2981 = -1.*t2298*t2254;
  t2982 = t2893*t2317;
  t2983 = t2981 + t2982;
  t2985 = -1.*t2347*t2983;
  t2986 = -1.*t2721*t2360;
  t2987 = t2985 + t2986;
  t2989 = t2347*t2721;
  t2990 = -1.*t2983*t2360;
  t2991 = t2989 + t2990;
  t2993 = t2390*t2987;
  t2994 = t2385*t2991;
  t2995 = t2993 + t2994;
  t2997 = t2385*t2987;
  t2998 = -1.*t2390*t2991;
  t2999 = t2997 + t2998;
  t3018 = -1.*t2385*t2483;
  t3019 = t3018 + t2938;
  t2502 = t2407*t2492;
  t3010 = -0.21*t2385;
  t3011 = -0.049*t2390;
  t3012 = t3010 + t3011;
  t3014 = 0.049*t2385;
  t3015 = t3014 + t2391;
  t3029 = t2347*t2953;
  t3030 = t2793*t2360;
  t3031 = t3029 + t3030;
  t3034 = -1.*t2390*t3031;
  t3035 = t3034 + t2964;
  t3037 = -1.*t2385*t3031;
  t3038 = t3037 + t2968;
  t3049 = t2347*t2983;
  t3050 = t2721*t2360;
  t3051 = t3049 + t3050;
  t3054 = -1.*t2390*t3051;
  t3055 = t3054 + t2994;
  t3057 = -1.*t2385*t3051;
  t3058 = t3057 + t2998;
  t3021 = -1.*t2414*t2492;
  t2503 = -1.*t2414*t2496;
  t2504 = t2502 + t2503;
  t3069 = 0.0016*t2407;
  t3070 = t3069 + t2429;
  t3072 = -0.2707*t2407;
  t3073 = -0.0016*t2414;
  t3074 = t3072 + t3073;
  t3040 = -1.*t2414*t3035;
  t3082 = t2385*t3031;
  t3083 = t2390*t2961;
  t3084 = t3082 + t3083;
  t3044 = t2407*t3035;
  t3060 = -1.*t2414*t3055;
  t3094 = t2385*t3051;
  t3095 = t2390*t2991;
  t3096 = t3094 + t3095;
  t3064 = t2407*t3055;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2241*t2273 + t2282*t2290 + t2296*t2321 + 0.1305*(t2296*t2298 + t2253*t2317*t2324) - 1.*t2253*t2324*t2334 + t2346*t2367 + t2376*t2383 + t2392*t2395 + t2401*t2405 + t2417*t2423 + t2431*t2436 - 0.0016*(t2414*t2423 + t2407*t2436) - 0.2707*(t2407*t2423 - 1.*t2414*t2436);
  p_output1[10]=t2242*t2324*t2334 + t2241*t2451 + t2290*t2455 + t2321*t2459 + 0.1305*t2466 + t2367*t2471 + t2383*t2477 + t2392*t2483 + t2401*t2488 + t2417*t2492 + t2431*t2496 - 0.0016*(t2414*t2492 + t2407*t2496) - 0.2707*t2504;
  p_output1[11]=0;
  p_output1[12]=t2241*t2242*t2255*t2324 + t2242*t2244*t2290*t2324 - 1.*t2242*t2254*t2334 + t2321*t2511 + 0.1305*(t2242*t2254*t2317 + t2298*t2511) + t2367*t2520 + t2383*t2524 + t2392*t2528 + t2401*t2532 + t2417*t2536 + t2431*t2540 - 0.0016*(t2414*t2536 + t2407*t2540) - 0.2707*(t2407*t2536 - 1.*t2414*t2540);
  p_output1[13]=t2241*t2253*t2255*t2324 + t2244*t2253*t2290*t2324 - 1.*t2253*t2254*t2334 + t2321*t2555 + 0.1305*(t2253*t2254*t2317 + t2298*t2555) + t2367*t2564 + t2383*t2568 + t2392*t2572 + t2401*t2576 + t2417*t2580 + t2431*t2584 - 0.0016*(t2414*t2580 + t2407*t2584) - 0.2707*(t2407*t2580 - 1.*t2414*t2584);
  p_output1[14]=-1.*t2241*t2254*t2255 - 1.*t2244*t2254*t2290 - 1.*t2324*t2334 + t2321*t2599 + 0.1305*(t2317*t2324 + t2298*t2599) + t2367*t2608 + t2383*t2612 + t2392*t2616 + t2401*t2620 + t2417*t2624 + t2431*t2628 - 0.0016*(t2414*t2624 + t2407*t2628) - 0.2707*(t2407*t2624 - 1.*t2414*t2628);
  p_output1[15]=t2241*t2455 + t2290*t2642 + 0.1305*t2298*t2645 + t2321*t2645 + t2317*t2367*t2645 + t2383*t2651 + t2392*t2655 + t2401*t2659 + t2417*t2663 + t2431*t2667 - 0.0016*(t2414*t2663 + t2407*t2667) - 0.2707*(t2407*t2663 - 1.*t2414*t2667);
  p_output1[16]=t2273*t2290 + t2241*t2680 + 0.1305*t2298*t2685 + t2321*t2685 + t2317*t2367*t2685 + t2383*t2690 + t2392*t2694 + t2401*t2698 + t2417*t2702 + t2431*t2706 - 0.0016*(t2414*t2702 + t2407*t2706) - 0.2707*(t2407*t2702 - 1.*t2414*t2706);
  p_output1[17]=t2241*t2244*t2324 - 1.*t2255*t2290*t2324 + t2722 + t2723 + t2724 + t2728 + t2732 + t2736 + t2740 + t2744 + t2748 + t2752;
  p_output1[18]=0.135*t2283*t2451 - 0.135*t2213*t2455 + 0.1305*t2298*t2477 + t2321*t2477 + t2317*t2367*t2477 + t2383*t2760 + t2392*t2764 + t2401*t2768 + t2417*t2772 + t2431*t2776 - 0.0016*(t2414*t2772 + t2407*t2776) - 0.2707*(t2407*t2772 - 1.*t2414*t2776);
  p_output1[19]=-0.135*t2213*t2680 + 0.135*t2283*t2790 + 0.1305*t2298*t2793 + t2321*t2793 + t2317*t2367*t2793 + t2383*t2798 + t2392*t2802 + t2401*t2806 + t2417*t2810 + t2431*t2814 - 0.0016*(t2414*t2810 + t2407*t2814) - 0.2707*(t2407*t2810 - 1.*t2414*t2814);
  p_output1[20]=-0.135*t2213*t2244*t2324 + 0.135*t2255*t2283*t2324 + t2722 + t2723 + t2724 + t2728 + t2732 + t2736 + t2740 + t2744 + t2748 + t2752;
  p_output1[21]=0.1305*(-1.*t2242*t2298*t2324 - 1.*t2317*t2459) + t2367*t2466 + t2347*t2392*t2466 - 1.*t2360*t2401*t2466 + t2242*t2324*t2830 + t2459*t2833 + t2417*t2844 + t2431*t2848 - 0.0016*(t2414*t2844 + t2407*t2848) - 0.2707*(t2407*t2844 - 1.*t2414*t2848);
  p_output1[22]=t2253*t2324*t2830 + t2833*t2862 + 0.1305*(t2343 - 1.*t2317*t2862) + t2367*t2866 + t2347*t2392*t2866 - 1.*t2360*t2401*t2866 + t2417*t2875 + t2431*t2879 - 0.0016*(t2414*t2875 + t2407*t2879) - 0.2707*(t2407*t2875 - 1.*t2414*t2879);
  p_output1[23]=-1.*t2254*t2830 + t2833*t2893 + 0.1305*(t2254*t2298 - 1.*t2317*t2893) + t2367*t2897 + t2347*t2392*t2897 - 1.*t2360*t2401*t2897 + t2417*t2907 + t2431*t2911 - 0.0016*(t2414*t2907 + t2407*t2911) - 0.2707*(t2407*t2907 - 1.*t2414*t2911);
  p_output1[24]=t2392*t2488 + t2477*t2923 + t2471*t2927 + t2401*t2931 + t2431*t2935 + t2417*t2939 - 0.2707*(-1.*t2414*t2935 + t2407*t2939) - 0.0016*(t2407*t2935 + t2414*t2939);
  p_output1[25]=t2793*t2923 + t2927*t2953 + t2401*t2957 + t2392*t2961 + t2431*t2965 + t2417*t2969 - 0.2707*(-1.*t2414*t2965 + t2407*t2969) - 0.0016*(t2407*t2965 + t2414*t2969);
  p_output1[26]=t2721*t2923 + t2927*t2983 + t2401*t2987 + t2392*t2991 + t2431*t2995 + t2417*t2999 - 0.2707*(-1.*t2414*t2995 + t2407*t2999) - 0.0016*(t2407*t2995 + t2414*t2999);
  p_output1[27]=t2431*t2492 + t2483*t3012 + t2488*t3015 + t2417*t3019 - 0.0016*(t2502 + t2414*t3019) - 0.2707*(t2407*t3019 + t3021);
  p_output1[28]=t2961*t3015 + t3012*t3031 + t2431*t3035 + t2417*t3038 - 0.2707*(t2407*t3038 + t3040) - 0.0016*(t2414*t3038 + t3044);
  p_output1[29]=t2991*t3015 + t3012*t3051 + t2431*t3055 + t2417*t3058 - 0.2707*(t2407*t3058 + t3060) - 0.0016*(t2414*t3058 + t3064);
  p_output1[30]=-0.0016*t2504 - 0.2707*(-1.*t2407*t2496 + t3021) + t2492*t3070 + t2496*t3074;
  p_output1[31]=t3035*t3070 + t3074*t3084 - 0.2707*(t3040 - 1.*t2407*t3084) - 0.0016*(t3044 - 1.*t2414*t3084);
  p_output1[32]=t3055*t3070 + t3074*t3096 - 0.2707*(t3060 - 1.*t2407*t3096) - 0.0016*(t3064 - 1.*t2414*t3096);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void J_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
