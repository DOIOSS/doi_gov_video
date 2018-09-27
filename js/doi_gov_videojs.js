(function($) {
  $(window).bind('load', function () {
    $('.vjs-social-overlay .vjs-close-button:not(.vjs-icon-cancel)').attr('title','Close sharing screen and return to video');
    $('.vjs-social-overlay .vjs-close-button:not(.vjs-icon-cancel) .vjs-control-text').text('Close sharing screen and return to video');
  });

  Drupal.behaviors.doi_gov_video = {
    attach: function(context, settings) {
      if ($.type(settings.doi_gov_video) !== 'undefined' && $.type(settings.doi_gov_video.instances) !== 'undefined') {    
        for (player_id in settings.doi_gov_video.instances) {
          var player = videojs(player_id+'-video', {
            aspectRatio: '16:9',
            fluid: true
          });
      
          player.dock({
          //title: 
          });

          player.social({
            url: window.location.href,
            embedCode: '<iframe src="'+settings.doi_gov_video.instances[player_id].files.src+'" width="480" height="306" frameborder="0" scrolling="auto" allowfullscreen></iframe>',
            displayAfterVideo: false,
            buttonParent: 'shelf',
            services: {
              'facebook': true,
              'google': true,
              'twitter': true,
              'tumblr': true,
              'pinterest': true,
              'linkedin': false
            }
          });

          player.ga({
            'eventCategory': 'DOI.gov Video',
            'eventsToTrack': ['start', 'end', 'play', 'pause', 'percentsPlayed', 'fullscreen'],
            'eventLabel': window.location.href,
            'percentsPlayedInterval': 25
          });

          $('#' + player_id + '-video', context).once('doi_gov_video', function() {
            add_instance_buttons(settings.doi_gov_video.instances[player_id]);
          });

          if ($.type(settings.doi_gov_video.instances[player_id].files.ad_src) !== 'undefined' && settings.doi_gov_video.instances[player_id].files.ad_src !== (window.location.protocol + "//" + window.location.hostname + "/")) {
            var Button = videojs.getComponent('Button');
            var AudioDescriptionButton = videojs.extend(Button, {
              constructor: function() {
                Button.apply(this, arguments);
                this.addClass('vjs-icon-audio-description');
                this.controlText('Turn On Audio Description');
              },
              handleClick: function() {
                var player = videojs(player_id+'-video');
                var currentSource = player.src();
                var currentTime = player.currentTime();
                var isPaused = player.paused();
                // if the current source isn't AD, make it AD
                if (currentSource!=settings.doi_gov_video.instances[player_id].files.ad_src) {
                  this.addClass('vjs-audio-description-button-control-focus');
                  this.controlText('Turn Off Audio Description');
                  ga('send', 'event', 'DOI.gov Video', 'audio description on', window.location.href, $('.pane-node-title h1').text());
                  player.src({
                    type: "video/mp4",
                    src: settings.doi_gov_video.instances[player_id].files.ad_src
                  });
                  player.currentTime(currentTime);
                  player.handleTechSeeked_();
                  if(!isPaused) {
                    player.play();
                    player.handleTechSeeked_();
                  }
                  // current source is AD, toggle to previous video resolution switcher source
                } else {
                  this.removeClass('vjs-audio-description-button-control-focus');
                  this.controlText('Turn On Audio Description');
                  ga('send', 'event', 'DOI.gov Video', 'audio description off', window.location.href, $('.pane-node-title h1').text());
                  player.src({
                    type: "video/mp4",
                    src: settings.doi_gov_video.instances[player_id].files.src
                  });
                  player.currentTime(currentTime);
                  player.handleTechSeeked_();
                  if (!isPaused) {
                    player.play();
                    player.handleTechSeeked_();
                  }
                }
              }
            });
            videojs.registerComponent('AudioDescriptionButton', AudioDescriptionButton);
            player.getChild('controlBar').addChild('AudioDescriptionButton', {}, 9);
          }

          $('.vjs-captions-button .vjs-menu-item:contains("captions off")').click(function () {
            ga('send', 'event', 'DOI.gov Video', 'captions off', window.location.href, $('.pane-node-title h1').text());
          });
          $('.vjs-captions-button .vjs-menu-item:contains("English")').click(function () {
            ga('send', 'event', 'DOI.gov Video', 'captions on', window.location.href, $('.pane-node-title h1').text());
          });
          $('.vjs-social-share-links a').each(function () {
            $(this).click(function () {
              ga('send', 'event', 'DOI.gov Video', 'Share on ' + $(this).find('.vjs-control-text').text(), window.location.href, $('.pane-node-title h1').text());
            });
          });
        }
      }
    }
  }
      
  var add_instance_buttons = function (instance) {
  
    if (instance.buttons.transcript)
    {
      $('#'+instance.player_id+'-video div.vjs-dock-shelf').append('<button class="vjs-transcript-control vjs-button" type="button" aria-live="polite" aria-disabled="false" title="'+instance.buttons.transcript.label+'"><span class="">Transcript</span></button>');
      
      $('.vjs-transcript-control').click(function() {
        $('.field--name-field-video-transcript').toggleClass('transcript-hidden');
      });
    }

    $('#'+instance.player_id+'-video div.vjs-dock-shelf').append('<button class="vjs-download-control vjs-button" type="button" aria-live="polite" aria-disabled="false" title="'+instance.buttons.download.label+'"><span class="">Download</span></button>');

    $('.vjs-download-control').click(function() {
      window.location.href = instance.url;
      ga('send', 'event', 'DOI.gov Video', 'download', instance.url, $('.pane-node-title h1').text());
    });  

    if (instance.youtube) {
      $('#'+instance.player_id+'-video div.vjs-dock-shelf').append('<button class="vjs-youtube-control vjs-button" type="button" aria-live="polite" aria-disabled="false" title="'+instance.buttons.youtube.label+'"><span class="">YouTube</span></button>');
      
      $('.vjs-youtube-control').click(function() {
        window.location.href = instance.youtube;
        ga('send', 'event', 'DOI.gov Video', 'youtube', instance.youtube, $('.pane-node-title h1').text());
      }); 
    }

    $('#'+instance.player_id+'-video div.vjs-dock-shelf').append('<a class="vjs-brand-control vjs-button" href="'+instance.logo.link+'"><img src="'+instance.logo.file+'" alt="'+instance.logo.label+'"></a>');    
  };
})(jQuery);
